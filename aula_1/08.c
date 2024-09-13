#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso (em KG) e altura (em metros): ");
    scanf("%f%f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f", imc);

    return 0;
}

