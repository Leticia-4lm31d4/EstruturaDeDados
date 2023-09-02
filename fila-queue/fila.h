/* ================================================================== *
 *  PROJETO (PARTE 1)
 *  Estrutura de dados
 *  Bruna Scarpelli - 800435
 *  Letícia Almeida P. de A. Ferreira - 800480
 * ================================================================== */ 

#ifndef __FILA__
#define __FILA__

// Tipo de Estruturas
typedef struct NO
{
  int dado;
  struct NO *prox;
} NO;

typedef struct TFila
{
  NO *inicio;
  NO *fim;
  int itens; 
} TFila;

// Protótipos das funções
void inicializar(TFila *f);
void enfileirar(int dado, TFila *f);
int desenfileirar(TFila *f);
int vazia(TFila *f);
void printa(TFila *f);
void cheia(TFila *f, int capacidade);
int tamanho(TFila *f);

#endif