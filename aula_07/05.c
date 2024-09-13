#include <stdio.h>

int main() {
    
    int vetor[5], aux;

    for (int i = 0; i < 5; i++) {
        printf("Insira um número: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0, j = 4; i < j; i++, j--) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}