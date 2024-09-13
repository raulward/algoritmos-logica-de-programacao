#include <stdio.h>

int main() {

    float valor;
    int qntd;

    printf("Insira o preco: ");
    scanf("%f", &valor);

    printf("Insira a quantidade: ");
    scanf("%d", &qntd);

    printf("O valor total foi de: %.2f\n", valor * qntd);

    return 0;
}