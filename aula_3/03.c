#include <stdio.h>

int main() {

    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);


    printf("%s\n", num > 0 ? "Numero positivo" : "Numero negativo");

    return 0;
}