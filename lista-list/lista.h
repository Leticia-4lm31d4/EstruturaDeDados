/* ================================================================== *
 *  PROJETO (PARTE 1)
 *  Estrutura de dados
 *  Bruna Scarpelli - 800435
 *  Gustavo Andreas dos Santos - RA
 *  Letícia Almeida P. de A. Ferreira - 800480
 * ================================================================== */ 

#ifndef __LISTA__
#define __LISTA__

typedef int T;

struct NO
{
  T dado;
  struct NO *prox;
  struct NO *anterior;
};

typedef struct TLista
{
  struct NO *sentinela;
  unsigned quantidade;
} TLista;

void inicializarLista(TLista *l);

void inserirInicioLista(TLista *l, T dado);
void inserirFimLista(TLista *l, T dado);

void removerInicioLista(TLista *l);
void removerFimLista(TLista *l);

void destruir(TLista *l);
int vaziaLista(TLista *l);

void imprimirLista(TLista *l, int asc);

#endif