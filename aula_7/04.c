#include <stdio.h>

int main() {

    int vetor[10], contPar = 0, contImpar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &vetor[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contPar++;
        } else {
            contImpar++;
        }
    }

    printf("Pares: %d\nQuantidade de impares: %d\n", contPar, contImpar);

    return 0;

}