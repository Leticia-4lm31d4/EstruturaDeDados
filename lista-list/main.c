/* ================================================================== *
 *  PROJETO (PARTE 1)
 *  Estrutura de dados
 *  Bruna Scarpelli - 800435
 *  Letícia Almeida P. de A. Ferreira - 800480
 * ================================================================== */ 

#include <stdio.h>
#include <stdlib.h> 
#include "lista.h" 

int main()
{ 
  TLista *l = (TLista*) malloc(sizeof(TLista));

  // 1) FILA 
  printf("* FILA *\n");
  
  // 2) LISTA   
  printf("\n* LISTA *\n");

  inicializarLista(l);

  imprimirLista(l, 1);
  
  inserirInicioLista(l, 3);
  inserirInicioLista(l, 2);
  inserirInicioLista(l, 1);

  inserirFimLista(l, 4);
  inserirFimLista(l, 5);
  inserirFimLista(l, 6);

  imprimirLista(l, 1);

  removerFimLista(l);
  removerInicioLista(l);
  
  imprimirLista(l, 1);

  destruir(l);
  
  return 0;
}

/*=============================== *
 * gcc -c lista.c 
 * gcc main.c -o main lista.o 
 * ./main 
 * ============================== */