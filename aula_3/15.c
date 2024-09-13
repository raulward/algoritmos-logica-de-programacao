#include <stdio.h>

int main() {

    int dia, valorRestante;

    printf("Insira o dia do mes : ");
    scanf("%d", &dia);

    valorRestante = dia % 7;

    switch (valorRestante) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terca-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 0:
        printf("Sabado\n");
        break;
    
    default:
        break;
    }

    return 0;
}