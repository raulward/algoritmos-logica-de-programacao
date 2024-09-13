#include <stdio.h>

int main() {

    int idade1, idade2;

    printf("Insira as idades: ");
    scanf("%d%d", &idade1, &idade2);


    printf("Sao %d anos de diferenca\n", idade1 - idade2);

    return 0;
}