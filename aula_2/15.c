#include <stdio.h>

int main() {

    float salario, desconto, salarioFinal;

    printf("Insira seu salario bruto e o desconto em porcentagem: ");
    scanf("%f%f", &salario, &desconto);

    salarioFinal = salario - (salario * desconto / 100);

    printf("O salario final e: R$ %.2f", salarioFinal);

    return 0;
}