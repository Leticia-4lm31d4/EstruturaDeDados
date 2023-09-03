// Queue implementation in C

#include <stdio.h>
#define SIZE 5 

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nFila cheia!");
  else {
    if (front == -1) // primeiro elemento
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nElemento inserido: %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nFila vazia!");
  else {
    printf("\nElemento removido: %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nFila vazia!");
  else {
    int i;
    printf("\nElementos na fila:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}

int main() {
  //deQueue is not possible on empty queue
  deQueue();

  //enQueue 5 elements
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // 6th element can't be added to because the queue is full
  enQueue(6);

  display();

  //deQueue removes element entered first i.e. 1
  deQueue();

  //Now we have just 4 elements
  display();
  
  // Remove todos
  deQueue();
  deQueue();
  deQueue();
  deQueue();

  display();

  return 0;
}