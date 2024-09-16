#include <stdio.h>

int main() {

    int cont = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0) printf("%d ", i);
    }

    printf("\n");

    return 0;
}