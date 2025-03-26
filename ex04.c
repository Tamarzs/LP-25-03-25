#include "stdio.h"

int main() {
    int suco = 0;
    int batata = 0;
    int hamburger = 0;
    int combo = 0;
    int valorTotal = 0;
    char item;
    
    printf("Digite o item vendido (S para suco, B para batata, H para hambúrger ou C para combo; F para encerrar): ");
    item = getchar();
    getchar();
    
    while( item != 'F' ) {
        switch (item) {
            case 'S': 
            suco++;
            valorTotal += 9;
            break;
            case 'B':
            batata++;
            valorTotal += 10;
            break;
            case 'H':
            hamburger++;
            valorTotal += 15;
            break;
            case 'C':
            combo++;
            valorTotal += 30;
            break;
            
        } printf("Digite o item vendido (S para suco, B para batata, H para hambúrger ou C para combo; F para encerrar): ");
    item = getchar();
    getchar();
    }
    
    int total = suco + batata + hamburger + combo;
    
    printf("Suco: %d vendidos\n", suco);
    printf("Batata: %d vendidos\n", batata);
    printf("Hamburger: %d vendidos\n", hamburger);
    printf("Combo: %d vendidos\n", combo);
    
    printf("Total: %d\n", total);
    printf("Valor total: %d", valorTotal);
}