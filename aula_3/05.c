#include <stdio.h>

int main() {

    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);


    printf("%s\n", ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) ? "Ano bissexto" : "Nao e ano bissexto");

    return 0;
}