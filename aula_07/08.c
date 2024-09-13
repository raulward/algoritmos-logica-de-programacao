#include <stdio.h>

int main() {

    int vetor[10], opt, isFound = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para verificar se ele esta contido no vetor: ");
    scanf("%d", &opt);

    for (int i = 0; i < 10; i++) {
        if (opt == vetor[i]) {
            isFound = 1;
            break;
        }
    }

    printf("%s\n", isFound ? "Numero encontrado" : "Numero nao encontrado");

    return 0;
}