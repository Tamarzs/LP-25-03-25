#include "stdio.h"

int main() {
    int lavar = 0;
    int secar = 0;
    int enxaguar = 0;
    char modo;
    
    printf("Digite o modo desejado (S: Secar, E: Enxaguar e secar, L: Lavar, enxaguar e secar): ");
    modo = getchar();
    getchar();
    
    while ( modo != 'F' ) {
        switch(modo) {
            case 'L':
            lavar++;
            case 'E':
            enxaguar++;
            case 'S':
            secar++;
            break;
        } printf("Digite o modo desejado (S: Secar, E: Enxaguar e secar, L: Lavar, enxaguar e secar): ");
    modo = getchar();
    getchar();
    }
    if( lavar + secar + enxaguar == 3) {
        printf("Lavando, enxaguando e secando");
    } else if ( lavar + secar + enxaguar == 2) {
        printf("Enxaguando e secando");
    } else if ( lavar + secar + enxaguar == 1) {
        printf("Secando");
    }
}