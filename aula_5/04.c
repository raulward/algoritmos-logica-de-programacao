#include <stdio.h>

int main() {

    int number, fat, i;

    printf("Insira um numero: ");
    scanf("%d", &number);

    fat = number;
    for (i = number - 1; i > 1; i--) {
        fat = fat * i;
    }

    printf("O fatorial do numero %d e: %d\n", number, fat);

    return 0;
}