#include <stdio.h>

int main() {

    float salario;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    printf("O salario com aumento aplicado sera: R$ %.2f\n", salario < 1500 ? salario * 1.1 :  salario * 1.05);

    return 0;

}