#include <stdio.h>

int main() {

    float valor, valorFinal;
    int porcentagem;

    printf("Insira o valor do produto para aplicar o desconto: ");
    scanf("%f", &valor);

    printf("Insira o desconto (em porcentagem): ");
    scanf("%d", &porcentagem);

    valorFinal = valor - (valor * porcentagem/100);

    printf("Valor final do produto: %.2f", valorFinal);

    return 0;
}