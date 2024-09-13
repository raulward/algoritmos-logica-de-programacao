#include <stdio.h>

int main(){

    int num1, num2;

    printf("Insira dois numeros: ");
    scanf("%d%d", &num1, &num2);

    printf("O numero %d e maior\n", num1 > num2 ? num1 : num2);


    return 0;
}