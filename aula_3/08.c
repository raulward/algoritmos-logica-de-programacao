#include <stdio.h>

int main() {

    int lado1, lado2, lado3, podeFormar;

    printf("Insira os lados dos triangulos: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    podeFormar = (lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2);

    printf("%s\n", podeFormar ? "Pode formar um triangulo" : "Nao pode formar um triangulo");

    return 0;
}