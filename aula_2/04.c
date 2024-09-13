#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media = 0;

    printf("Insira as notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("A media e: %.2f", media);

    

}