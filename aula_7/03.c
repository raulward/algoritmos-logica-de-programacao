#include <stdio.h>

int main() {

    int vetor[10], maiorNumero;

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &vetor[i]);

        
    }

    maiorNumero = vetor[0];

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
        }
    }

    printf("Maior numero do vetor e: %d\n", maiorNumero);

    return 0;

}