#include "stdio.h"

int main() {
    int num, soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {  
        if (i % 2 != 0) {  
            soma += i;  
            printf("%d ", i);  
        }
    }
    
    printf("\nSoma dos números ímpares: %d\n", soma);
    return 0;
}