#include <stdio.h>

int main() {

    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("%s\n", (num % 3 == 0) && (num % 5 == 0) ? "E multiplo de 5 e 3" : "Nao e multiplo de 5 e 3");

    return 0;
}