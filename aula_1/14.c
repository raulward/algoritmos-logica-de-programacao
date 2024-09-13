#include <stdio.h>

int main() {

    int anos;
    float capitalInicial, juros, montante;

    printf("Insira o seu capital inicial e a taxa de juros anual: ");
    scanf("%f%f", &capitalInicial, &juros);

    printf("Insira o tempo em que o investimento sera feito: ");
    scanf("%d", &anos);

    montante = capitalInicial * (juros / 100) * anos;

    printf("O montante ao final sera: %.2f", montante);

    return 0;
}