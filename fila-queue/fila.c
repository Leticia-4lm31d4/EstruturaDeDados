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

// Declaração das Funções
void inicializar(TFila *f)
{
  f->inicio = NULL;
  f->fim = NULL;
  f->itens = 0; 
}

int vazia(TFila *f)
{
  NO *p = f->inicio;

  if(p == NULL)
  {
    return 1;
  }
  else
  {
    return 0;  
  }
}

void enfileirar(int dado, TFila *f)
{
  NO *p = (NO*) malloc(sizeof(NO));
  
  if(p == NULL)  
  {
    // Erro de alocação
    return;  
  }
  else
  {
    // Inicializa Nó
    p->dado = dado;
    p->prox = NULL;

    // Inserção de elemento
    if(f->inicio == NULL)
    {
      f->inicio = p;
    }
    else
    {
      f->fim->prox = p;
    }

    f->fim = p;
  }
  f->itens++;
}

int desenfileirar(TFila *f)
{
  NO *p = f->inicio;
  int dado = 0;

  if(p != NULL)
  {
    f->inicio = p->prox;
    p->prox = NULL;

    dado = p->dado;
    free(p);

    // Fim da fila
    if(f->inicio == NULL)
    {
      f->fim = NULL;
    }
  }
  // else = fila vazia
  f->itens--;
  
  return dado;
}

void printa(TFila *f)
{
  NO *p = f->inicio;

  if(p != NULL)
  {
    while (p != NULL)
    {
      if(p->prox == NULL)
      {
        printf("%d\n", p->dado);
      }
      else
      {
        printf("%d ", p->dado);
      }
      p = p->prox;
    }
  }
  // else = fila vazia
}

void cheia(TFila *f, int capacidade)
{
  if(f->itens == capacidade){
    printf("cheia\n");
  }
  else{
    printf("incompleta\n");
  }
}

int tamanho(TFila *f)
{
  return f->itens;
}