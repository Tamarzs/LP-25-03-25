#include "stdio.h"

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int fim = num;
    num = 0;

for(int num = 1; num <= fim; num++) {
  if (num % 2 != 0) {
      printf("%d ", num);
  }
}
}