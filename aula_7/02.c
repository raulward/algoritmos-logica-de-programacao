#include <stdio.h>

int main() {

    float notas[5], media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite uma nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media / 5;

    printf("Media das notas: %.2f\n", media);


    return 0;
}