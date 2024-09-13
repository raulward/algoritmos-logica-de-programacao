#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("Insira as notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O aluno esta %s\n", media >= 7 ? "aprovado" : "reprovado");

    return 0;
}