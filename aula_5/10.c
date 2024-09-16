#include <stdio.h>

int main() {

    int n, soma = 0;

    printf("Insira a quantidade de quadrados: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i * i;
    }

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}