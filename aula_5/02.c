#include <stdio.h>

int main() {

    int n, soma = 0;
    
    printf("Insira um valor: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        soma += i;
    }

    printf("A soma total e: %d\n", soma);

    return 0;
}