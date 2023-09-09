#include <stdio.h>

#define MAX 10 // tamanho do deque

// Funções
void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);

int main() {
  int arr[MAX];
  int front, rear, i, n;

  front = rear = -1;

  for (i = 0; i < MAX; i++){
    arr[i] = 0;
  }

  // chamada das funções para montar o deque
  addRear(arr, 5, &front, &rear);
  addFront(arr, 12, &front, &rear);
  addRear(arr, 11, &front, &rear);
  addFront(arr, 5, &front, &rear);
  addRear(arr, 6, &front, &rear);
  addFront(arr, 8, &front, &rear);

  // Mostra o deque
  printf("\nElementos do deque: "); 
  display(arr);
  printf("\n");

  // remove um elemento da frente
  // i = elemento removido
  i = delFront(arr, &front, &rear);
  printf("\nElemento removido da frente: %d", i);
  
  printf("\nElements in a deque after deletion: ");
  display(arr);
  printf("\n");

  // Adiciona mais dois elementos, ambos pelo final da fila
  addRear(arr, 16, &front, &rear);
  addRear(arr, 7, &front, &rear);

  printf("\nElements in a deque after addition: ");
  display(arr);
  printf("\n");

  // remove elemento do fim da fila
  i = delRear(arr, &front, &rear);
  printf("\nremoved item: %d", i);

  printf("\nElements in a deque after deletion: ");
  display(arr);
  printf("\n");

  // conta os elementos do deque
  n = count(arr);
  printf("\nTotal number of elements in deque: %d", n);
}

// Declaração das funções
void addFront(int *arr, int item, int *pfront, int *prear) {
  int i, k, c;

  // verifica se esta cheia, para saber se pode inserir
  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) { 
    *pfront = *prear = 0;
    arr[*pfront] = item;
    return;
  }

  if (*prear != MAX - 1) {
    c = count(arr);
    k = *prear + 1;
    for (i = 1; i <= c; i++) {
      arr[k] = arr[k - 1];
      k--;
    }

    arr[k] = item;
    *pfront = k;
    (*prear)++;
  } 
  else {
    (*pfront)--;
    arr[*pfront] = item;
  }
}

void addRear(int *arr, int item, int *pfront, int *prear) {
  int i, k;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) {
    *prear = *pfront = 0;
    arr[*prear] = item;
    return;
  }

  if (*prear == MAX - 1) {
    k = *pfront - 1;
    for (i = *pfront - 1; i < *prear; i++) {
      k = i;
      if (k == MAX - 1)
        arr[k] = 0;
      else
        arr[k] = arr[i + 1];
    }

    (*prear)--;
    (*pfront)--;
  }

  (*prear)++;
  arr[*prear] = item;
}

int delFront(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*pfront];
  arr[*pfront] = 0;

  if (*pfront == *prear)//esvaziou o deque
    *pfront = *prear = -1;
  else
    (*pfront)++;// nova frente

  return item;
}

int delRear(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*prear];
  arr[*prear] = 0;
  (*prear)--;

  if (*prear == -1)//esvaziou a fila
    *pfront = -1;
  return item;
}

void display(int *arr) {
  int i;

  printf("\n front:  ");
  for (i = 0; i < MAX; i++){
    printf("  %d", arr[i]);
  }
  printf("  :rear\n");
}

int count(int *arr) {
  int c = 0;

  for (int i = 0; i < MAX; i++) {
    if (arr[i] != 0)
      c++;
  }
  
  return c;
}