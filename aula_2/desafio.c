#include <stdio.h>

int main() {

    float salario, valorPago;

    printf("insira seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000) {
        printf("Isento\n");
    } else if (salario <= 3000) {
        valorPago = salario * 0.1;
        printf("Valor a ser pago: R$ %.2f\n", valorPago);
    } else if (salario <= 5000) {
        valorPago = salario * 0.15;
        printf("Valor a ser pago: R$ %.2f\n", valorPago);
    } else if (salario > 5000) {
        valorPago = salario * 0.2;
        printf("Valor a ser pago: R$ %.2f\n", valorPago);   
    } else printf("Valor invalido");

    return 0;

}