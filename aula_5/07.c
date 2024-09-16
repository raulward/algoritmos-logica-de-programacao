#include <stdio.h>

int main() {

    int n, aux, soma;
    float media;

    printf("Insira a quantidade de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &aux);
        soma += aux;
    }

    media = (float) soma / n;

    printf("A media da soma dos numeros informados e: %.2f\n", media);

    return 0;
}