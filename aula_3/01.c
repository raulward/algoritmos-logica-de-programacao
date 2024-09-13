#include <stdio.h>

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("%s\n", idade >= 18 ? "Maior de idade" : "Menor de idade");

    return 0;

}