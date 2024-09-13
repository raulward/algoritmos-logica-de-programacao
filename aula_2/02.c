#include <stdio.h>

int main() {

    float base, altura;

    printf("Digite a base e altura do triangulo: ");
    scanf("%f%f", &base, &altura);

    printf("Area do triangulo: %.2f\n", (base * altura) / 2);

    return 0;

}