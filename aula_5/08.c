#include <stdio.h>

int main() {

    int cont = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) cont++;
    }

    printf("Quantidade de numeros diviseis por 3: %d\n", cont);

    return 0;
}