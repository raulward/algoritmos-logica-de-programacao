#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);

    printf("A soma dos numeros e: %d\n", num1 + num2);
    printf("A subtracao dos numeros e: %d\n", num1 - num2);
    printf("A multiplicacao dos numeros e: %d\n", num1 * num2);
    printf("A divisao dos numeros e: %d\n", num1 / num2);

    return 0;
}