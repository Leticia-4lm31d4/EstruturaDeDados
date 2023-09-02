/* ================================================================== *
 *  PROJETO (PARTE 1)
 *  Estrutura de dados
 *  Bruna Scarpelli - 800435
 *  Letícia Almeida P. de A. Ferreira - 800480
 * ================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include "lista.h" 

void inicializarLista(TLista *l)
{
  struct NO *n = (struct NO*)malloc(sizeof(struct NO));
  n->prox = n->anterior = l->sentinela = n;
  l->quantidade = 0;
}

void destruir(TLista *l)
{
  while(!vaziaLista(l)){
    removerFimLista(l);
  }
  free(l->sentinela);
}

int vaziaLista(TLista *l)
{
  return l->sentinela->prox == l->sentinela; 
}

void inserirInicioLista(TLista *l, int dado)
{
  struct NO *n = (struct NO*)malloc(sizeof(struct NO));
  n->dado = dado;
  n->prox = l->sentinela->prox;
  n->anterior = l->sentinela;
  l->sentinela->prox = n;
  n->prox->anterior = n;
  l->quantidade++;
}

void inserirFimLista(TLista *l, int dado)
{
  struct NO *n = (struct NO*)malloc(sizeof(struct NO));
  n->dado = dado;
  n->anterior = l->sentinela->anterior;
  n->prox = l->sentinela;
  l->sentinela->anterior = n;
  n->anterior->prox = n;
  l->quantidade++;
}

void removerFimLista(TLista *l)  
{
  struct NO *n = l->sentinela -> anterior;
  
  if( n != l->sentinela )
  { // lista vazia
    n->prox->anterior = n->anterior;
    n->anterior->prox = n->prox;
    free(n);
    l -> quantidade--;
  }
}

void removerInicioLista(TLista *l)  
{
  struct NO *n = l->sentinela -> prox;
  
  if( n != l->sentinela )
  { // lista vazia
    n->anterior->prox = n->prox;
    n->prox->anterior = n->anterior;
    free(n);
    l -> quantidade--;
  }
}

int length(TLista *l) {
  int t;
  struct NO *n;

  if (vaziaLista(l)) {
    return 0;
  } 

  t = 1;
  n = l->sentinela->prox;

  while(n != l->sentinela) {
    n = n->prox;
    t++;
  }
return t-1;
}

void imprimirLista(TLista *l, int asc) {
  struct NO *n;

   if (vaziaLista(l)) {
    printf("Lista vazia\n");
  } 
  else{
    printf("Lista possui %d elemento(s): \n", length(l));
  
    n = l-> sentinela->prox;

  do{
    printf("-> %d\n", n->dado);

    if (asc) {
      n = n->prox; 
    } else {
      n = n->anterior;
      }
    
    } while(n != l->sentinela);
  }
  printf("\n");
}