#include <stdio.h>

int main() {

    int num, isPrimo;

    printf("Insira um numero: ");
    scanf("%d", &num);


    isPrimo = (num % 2 == 0 && num != 2) || (num % 3 == 0 && num != 3) || (num % 5 == 0 && num != 5) || (num % 7 == 0 && num != 7);

    printf("%s\n", isPrimo == 0 ? "E primo" : "Nao e primo");

    return 0;
}