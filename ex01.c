#include "stdio.h"

int main() {
    int num, soma;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int fim = num;

for(int num = 1; num <= fim; num++) {
    if (num % 2 != 0) {
        num += soma;
        printf("%d ", soma);
    }
}
}
