#include <stdio.h>

int main() {

    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);


    printf("%s\n", num % 2 == 0 ? "Numero par" : "Numero impar");

    return 0;
}