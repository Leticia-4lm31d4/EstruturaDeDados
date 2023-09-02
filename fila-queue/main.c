/* ================================================================== *
 *  PROJETO (PARTE 1)
 *  Estrutura de dados
 *  Bruna Scarpelli - 800435
 *  Gustavo Andreas dos Santos - RA
 *  Letícia Almeida P. de A. Ferreira - 800480
 * ================================================================== */ 

#include <stdio.h>
#include <stdlib.h> 
#include "fila.h"

// Protótipo da função
void inverte(TFila* f);

int main()
{  
  TFila *f = (TFila*) malloc(sizeof(TFila));
  
  printf("* FILA *\n");

  inicializar(f);

  enfileirar(1, f);
  enfileirar(2, f);
  enfileirar(3, f);

  printa(f);

  desenfileirar(f);
  desenfileirar(f);

  printa(f);
  
  // 2) LISTA   
  printf("\n* LISTA *\n");
  
  return 0;
}

/*
  gcc -c fila.c 
  gcc main.c -o main fila.o
  ./main
*/