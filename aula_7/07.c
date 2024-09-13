#include <stdio.h>

int main() {

    int vetor1[9], vetor2[9], soma = 0;

    for (int i = 0; i < 9; i++) {
        printf("Insira dois valores para cada vetor: ");
        scanf("%d%d", &vetor1[i], &vetor2[i]);
        soma += vetor1[i] + vetor2[i];
    }

    printf("A soma dos elementos dos dois vetores e: %d", soma);

    return 0;
}