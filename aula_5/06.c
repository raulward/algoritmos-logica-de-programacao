#include <stdio.h>

int main() {

    int n, antePenultimo = 0, penultimo = 1, atual;
    
    printf("Insira um digito: ");
    scanf("%d", &n);

    printf("%d ", penultimo);
    
    while (1) {
        atual = antePenultimo + penultimo;  
        
        if (atual >= n) {
            break;  
        }

        printf("%d ", atual);  
        
        antePenultimo = penultimo; 
        penultimo = atual;  
    }
    printf("\n");

    return 0;
}