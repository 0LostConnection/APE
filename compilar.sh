#!/bin/bash

# Verifica se os parâmetros foram passados
if [ "$#" -lt 1 ]; then
    echo "Uso: $0 <atividade> [flags]"
    exit 1
fi

ATIVIDADE=$1
FLAGS=$2
BASE_DIR="./Atividades"

# Caminho da pasta da atividade
ATIVIDADE_DIR="$BASE_DIR/$ATIVIDADE"
BUILD_DIR="$ATIVIDADE_DIR/build"

# Verifica se o diretório da atividade existe
if [ ! -d "$ATIVIDADE_DIR" ]; then
    echo "Atividade '$ATIVIDADE' não encontrada!"
    exit 1
fi

# Cria o diretório de build se não existir
mkdir -p "$BUILD_DIR"

# Compila todos os arquivos C da atividade selecionada
for file in "$ATIVIDADE_DIR"/*.c; do
    if [ -f "$file" ]; then
        gcc $FLAGS "$file" -o "$BUILD_DIR/$(basename "$file" .c).out"
        echo "Compilado: $(basename "$file")"
    fi
done

echo "Compilação da atividade '$ATIVIDADE' concluída!"
