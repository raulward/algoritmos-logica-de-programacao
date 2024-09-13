#include <stdio.h>

int main() {

    float valorEmDolar, taxaCambio;

    printf("Insira o valor em dolares e a taxa de cambio: ");
    scanf("%f%f", &valorEmDolar, &taxaCambio);

    printf("O valor em reais e: R$ %.2f\n", valorEmDolar * taxaCambio);

    return 0;
}