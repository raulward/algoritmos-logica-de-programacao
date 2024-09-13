#include <stdio.h>

int main() {

    float altura, pesoIdeal;
    char sexo;

    printf("Digite o seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    pesoIdeal = sexo == 'm' ? (altura * 72.7) - 58 : (altura * 62.1) - 44.7;

    printf("Seu peso ideal e: %.2f\n", pesoIdeal);

    return 0;
}