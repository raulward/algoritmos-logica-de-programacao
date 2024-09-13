#include <stdio.h>

int main() {

    float grausCelsius, grausFahreinheit;

    printf("Digite o grau em celsius: ");
    scanf("%f", &grausCelsius);

    grausFahreinheit = grausCelsius * 1.8 + 32;

    printf("Graus fahreinheit: %.2f", grausFahreinheit);

    return 0;

}