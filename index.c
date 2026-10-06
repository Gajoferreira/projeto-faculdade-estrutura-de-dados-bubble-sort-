#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];
    int copia[20];
    int i, j, num, repetido;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Gera 20 números únicos entre 1 e 500
    for (i = 0; i < 20; ) {
        num = (rand() % 500) + 1;
        repetido = 0;

        // Verifica se o número já existe no vetor
        for (j = 0; j < i; j++) {
            if (vetor[j] == num) {
                repetido = 1;
                break;
            }
        }

        // Se não for repetido, adiciona ao vetor
        if (!repetido) {
            vetor[i] = num;
            i++;
        }
    }

    // Faz uma cópia do vetor original antes da ordenação
    for (i = 0; i < 20; i++) {
        copia[i] = vetor[i];
    }

    // Exibe o vetor original
    printf("Vetor original:\n");
    for (i = 0; i < 20; i++) {
        printf("%d", vetor[i]);
        if (i < 19) printf(", ");
    }
    printf("\n");

    // Ordena o vetor usando Bubble Sort
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibe o vetor ordenado
    printf("\nVetor ordenado com Bubble Sort:\n");
    for (i = 0; i < 20; i++) {
        printf("%d", vetor[i]);
        if (i < 19) printf(", ");
    }
    printf("\n");

    // Exibe a cópia do vetor original
    printf("\nCopia do vetor original (antes da ordenacao):\n");
    for (i = 0; i < 20; i++) {
        printf("%d", copia[i]);
        if (i < 19) printf(", ");
    }
    return 0;
}

// esse projeto foi elaborado em 11/12/2025 