#include <stdio.h>

int main() {

    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", soma);


    return 0;
}