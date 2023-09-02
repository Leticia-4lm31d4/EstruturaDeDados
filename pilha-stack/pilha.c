// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // tamanho da pilha

int count = 0; // contagem dos elementos

// Estrutura da pilha
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack pilha;

// Cria pilha
void createEmptyStack(pilha *p) {
  p->top = -1; // pilha vazia
}

// Verifica se a pilha está cheia
int isfull(pilha *p) {
  if (p->top == MAX - 1) { return 1; } // -1 + 10 = 9 -> pilha cheia
  else { return 0; }
}

// Verifica se a pilha está vazia
int isempty(pilha *p) {
  if (p->top == -1) { return 1; } // pilha vazia, pois topo = -1
  else { return 0; }
}

// Insere elemento na pilha
void push(pilha *p, int novo) {
  if (isfull(p)) {
    printf("Pilha cheia!");
  } 
  else {
    p->top++;
    p->items[p->top] = novo;
  }
  count++;
}

// Remoção de elemento na pilha
void pop(pilha *p) {
  if (isempty(p)) {
    printf("\n Pilha vazia! \n");
  } 
  else {
    printf("Item removido = %d", p->items[p->top]);
    p->top--;
  }
  count--;
  printf("\n");
}

// Printa a pilha
void printStack(pilha *p) {
  printf("Pilha: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", p->items[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int ch;
  pilha *p = (pilha *)malloc(sizeof(p));

  createEmptyStack(p);

  push(p, 1);
  push(p, 2);
  push(p, 3);
  push(p, 4);

  printStack(p); // 4 3 2 1

  pop(p); // 4

  printf("\nApos remocao\n");
  printStack(p);
}