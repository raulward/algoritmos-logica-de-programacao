#include <stdio.h>

int main() {

    float raio, pi = 3.14;

    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    printf("O volume da esfera e: %.2f\n", (4/3) * pi * (raio * raio * raio));

    return 0;

}