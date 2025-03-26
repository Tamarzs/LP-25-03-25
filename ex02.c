#include <stdio.h>

int main() {
  char tamanho;

  printf("Digite o tamanho recebido, F para encerrar:");
  tamanho = getchar();

  int quantidadeP = 0;
  int quantidadeM = 0;
  int quantidadeG = 0;

  while( tamanho != 'F' ) {
    switch (tamanho) {
      case 'P':
	quantidadeP++;
	break;
      case 'M': 
	quantidadeM++;
	break;
      case 'G':
	quantidadeG++;
	break;
    }

    printf("Digite o tamanho recebido, F para encerrar:");
    tamanho = getchar();
  }

  printf("P: %d M: %d G: %d", quantidadeP, quantidadeM, quantidadeG);
  return 0;
}