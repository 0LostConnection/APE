# Algoritmos e Programação Estruturada

## Respostas da Lista 12

### 1 Programa em C que carrega dinamicamente um novo aluno, carregue os dados dele e exiba em um printf

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

aluno_t *criar_aluno() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));

    if (aluno == NULL) {
        printf("Erro na criação do aluno!\n");
        return NULL;
    }

    printf("\nDigite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';

    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota final do aluno: ");
    scanf("%f", &aluno->nota);

    return aluno;
}

void imprimir(aluno_t *aluno) {
    printf("Estudante: %s\nFaltas: %d\nNota: %.2f\nSituacao: %s\n\n", aluno->nome,
           aluno->faltas, aluno->nota,
           aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}

int main() {
    aluno_t *aluno = criar_aluno();
    if (aluno != NULL) {
        imprimir(aluno);
        free(aluno);
    }
    return 0;
}
```

<br>

### 2. Acerca de alocação dinâmica de memória

Responda:<br>
**a)** Qual o comportamento da função `free`?
> A função `free(* ptr)` faz o espaço apontado para o ponteiro fique disponível para futuras alocações.

**b)** Após chamar `free`, o ponteiro pode ser utilizado?
> Não. O uso do ponteiro em que o espaço foi limpo resulta em comportamentos indefinidos e/ou inesperados.

**c)** O que causa vazamentos de memória?
> Vazamentos de memória ocorrem quando a memória alocada dinamicamente não é liberada corretamente usando a função `free e torna-se inacessível.

**d)** O que a instrução `malloc` retorna quando não consegue realizar a alocação?
> Caso a função `malloc` não consiga realizar a alocação, ela retorna um ponteiro nulo (0). `NULL (void *) 0`

**e)** Explique a instrução `calloc`.
> A função `calloc(size_t nelem, size_t elsize)` aloca em um espaço vazio um array com `nelem` elementos, cada um com `elsize` de tamanho.

**f)** Qual a diferença entre as instruções `malloc` e `calloc`?
> A função `malloc` aloca dinamicamente apenas um objeto de tamanho `size`, enquanto a função `calloc` aloca dinamicamente um array com `nelem` elementos, cada um com `elsize` de tamanho.
>
> Referências:
> <https://www.man7.org/linux/man-pages/man0/stdlib.h.0p.html>; <https://www.youtube.com/watch?v=jx9MiCC3RJ4>

<br>

### 3. Acerca de Manipulação de Arquivos

**a)** Explique os diferentes modos de abertura de arquivos.
>
>**r ou rb** - Abre o arquivo para leitura.
>
>**w ou wb** - Trunca ou cria um arquivo para escrita.
>
>**aw ou ab** - Anexa; Abre ou cria um arquivo para a escrita no final do arquivo (EOF).
>
>**r+ ou rb+** - Abre um arquivo, permitindo também a escrita.
>
>**w+ ou wb+** - Trunca ou cria um arquivo e permite a leitura.
>
>**a+ ou ab+** - Anexa; Abre ou cria um arquivo para a escrita no final do arquivo (EOF), permitindo também a leitura.
>
>
>**Obs.:** (*b*) indica leitura em modo binário.

<br>

**b)** Explique o funcionamento das funções `fgets`, `fprintf`, `fread`, `fwrite`.

> **fgets** - A função fgets() lê dados de uma stream, indicada pelo terceiro argumento, e os armazena em um array apontado pelo primeiro argumento. A leitura ocorre até uma das seguintes condições ser atendida: o número de caracteres especificado pelo segundo argumento é lido, um caractere de nova linha (\n) é encontrado ou o final do arquivo (EOF) é alcançado.
>
> **fprintf** - A função fprintf() armazena dados formatados (indicados pelos argumentos a partir do segundo) em uma stream especificada pelo primeiro argumento.
>
> **fread** - A função fread() lê dados de uma stream, apontada pelo quarto argumento, e os armazena em um array apontado pelo primeiro argumento. A leitura ocorre para até n itens (especificados pelo terceiro argumento), cada um com tamanho definido pelo segundo argumento.
>
> **fwrite** - A função fwrite() grava dados em uma stream, apontada pelo quarto argumento, a partir de um array indicado pelo primeiro argumento. A escrita ocorre para até n itens (especificados pelo terceiro argumento), cada um com tamanho definido pelo segundo argumento.
>
> Referências:
> <https://www.man7.org/linux/man-pages/man0/stdio.h.0p.html>

<br>

### 4. Saída do código

>```txt
>0.00
>```

<br>

### 5. Analise o valor das variáveis após executar o código

>```c
>#include <stdio.h>
>
>int main() {
>    int a = 1, b = 2, c = 3, d = 4, e = 5;
>
>    printf("a * b / c = %.3f\n", (float)a * b / c);
>    printf("a * b %% c + 1 = %d\n", a * b % c + 1);
>    printf("++a * b - c-- = %d\n", ++a * b - c--); // "a" é incrementado para 2 e "c" e decrementado para 2
>    printf("7 - - b * ++d = %d\n", 7 - - b * ++d); // "d" é incrementado para 5 
>    printf("a / b / c = %.3f\n", (float)a / b / c);
>    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e); // "d" é decrementado para 4
>    printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
>    printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c); // "e" é incrementado para 6
>    printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b)); // "a" é incrementado para 3
>
>    return 0;
>}
>// Variáveis após execução:
>// a = 3
>// b = 2
>// c = 2
>// d = 4
>// e = 6
>```

<br>

### 7. Crie um programa em C que receba os dados de um estudante e avalie se este estudante é aprovado se ele obtiver nota mínima de 7 e frequência mínima de 75%

> ```c
> #include <stdio.h>
> #include <stdlib.h>
> #include <string.h>
> 
> int maximo_frequência = 100; // Número máximo de aulas
> 
> typedef struct Aluno {
>     char nome[100];
>     int faltas;
>     float nota;
>     float frequencia;
> } aluno_t;
> 
> void *criar_aluno(aluno_t *aluno) {
>     if (aluno == NULL) {
>         printf("Erro na criação do aluno!\n");
>         return NULL;
>     }
> 
>     printf("\nDigite o nome do aluno: ");
>     fgets(aluno->nome, sizeof(aluno->nome), stdin);
>     aluno->nome[strcspn(aluno->nome, "\n")] = '\0';
> 
>     printf("Digite a quantidade de faltas do aluno: ");
>     scanf("%d", &aluno->faltas);
> 
>     printf("Digite a nota final do aluno: ");
>     scanf("%f", &aluno->nota);
> 
>     // Cálculo da frequência
>     aluno->frequencia = ((maximo_frequência - aluno->faltas) / (float)maximo_frequência) * 100;
> 
>     return aluno;
> }
> 
> void verificar_aprovacao(aluno_t *aluno) {
>     if (aluno->nota >= 7 && aluno->frequencia >= 75) {
>         printf("O aluno %s foi aprovado!\n", aluno->nome);
>     } else {
>         printf("O aluno %s nao foi aprovado.\n", aluno->nome);
>     }
> 
>     printf("Frequencia do aluno: %.2f%%\n", aluno->frequencia);
> }
> 
> int main() {
>     aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
> 
>     if (aluno == NULL) {
>         printf("Erro ao alocar memoria!\n");
>         return 1;
>     }
> 
>     criar_aluno(aluno);
>     verificar_aprovacao(aluno);
> 
>     free(aluno);
>     return 0;
> }
> ```

<br>

### 8. O que é um vetor?
>
> Um vetor no C é uma estrutura de dados que armazena uma sequência de elementos do mesmo tipo em posições consecutivas de memória. Cada elemento é acessado por um índice, que começa em `0`.
>
> Para declarar um vetor, especifica-se o tipo de dado e o tamanho do vetor, como:
>
> ```c
> int numeros[5]
> ```
>
> Os elementos podem ser inicializados durante a declaração e acessados diretamente pelos índices, como:
>
> ```c
> numeros[0]. 
> ```
>
> No C, vetores são tratados como ponteiros para o primeiro elemento, e a memória é contínua.
