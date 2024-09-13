#include <stdio.h>

int main() {

    int vetor[10], aux, continua;

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &vetor[i]);
    }

    do {
        continua = 0;
        for (int i = 0; i < 9; i++) {
        if (vetor[i] > vetor [i + 1]) {
            aux = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
            continua = 1;
        }
    }
    } while (continua);


    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }   


    return 0;
}