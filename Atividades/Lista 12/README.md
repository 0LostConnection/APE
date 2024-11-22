# Algoritmos e Programação Estruturada

## Lista 12

### 1. Sobre a seguinte estrutura

```c
typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;
```

Crie um programa em C que carregue dinamicamente (via malloc) um novo aluno, carregue os dados dele e exiba em um printf.

Apresente também se ele foi ou não aprovado.

### 2. Acerca de alocação dinâmica de memória

Responda:<br>
**a)** Qual o comportamento da função `free`?<br>
**b)** Após chamar `free`, o ponteiro pode ser utilizado?<br>
**c)** O que causa vazamentos de memória?<br>
**d)** O que a instrução `malloc` retorna quando não consegue realizar a alocação?<br>
**e)** Explique a instrução `calloc`.<br>
**f)** Qual a diferença entre as instruções `malloc` e `calloc`?<br>

### 3. Acerca de Manipulação de Arquivos

**a)** Explique os diferentes modos de abertura de arquivos.
**b)** Explique o funcionamento das funções `fgets`, `fprintf`, `fread`, `fwrite`.

### 4. Qual a saída do seguinte código?

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);

    if (a > b || !(a > 0)) {
        c = (float)(b / a);
    } else {
        c = (float)(a / b);
    }

    printf("%.2f\n", c);
    return 0;
}
```

### 5. Analise o valor das variáveis após executar o seguinte código

```c
#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    printf("a * b / c = %.3f\n", (float)a * b / c);
    printf("a * b %% c + 1 = %d\n", a * b % c + 1);
    printf("++a * b - c-- = %d\n", ++a * b - c--);
    printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
    printf("a / b / c = %.3f\n", (float)a / b / c);
    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
    printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
    printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
    printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));

    return 0;
}
```

### 6. Qual o valor de w após a execução do seguinte trecho de código?

```c
#include <stdio.h>

int main() {
    int y = 5;
    int z = 11;
    int w;
    w = y + z;

    if (y > z) {
        w = y * z;
    }

    printf("%d", w);
    return 0;
}
```

### 7. Crie um programa em C que receba os dados de um estudante e avalie se este estudante é aprovado se ele obtiver nota mínima de 7 e frequência mínima de 75%
>
> Adicione toda a lógica em um único `if`.

### 8. O que é um vetor?

Explique o funcionamento de um vetor e como ele é tratado no C.
