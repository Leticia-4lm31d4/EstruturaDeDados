#include <stdio.h>

// Definição das funções
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int atual = array[step];
    int j = step - 1; // começa do segundo elemento, mas precisa comparar com o primeiro/anterior

    printArray(array, size);

    // For descending order, change key < array[j] to key > array[j].
    while (atual < array[j] && j >= 0) { // se o elemento da direita é menor que o da esquerda, troca
      array[j + 1] = array[j];
      --j;
    }

    array[j + 1] = atual;
  }
}


int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);

  insertionSort(data, size);

  printf("\nSorted array in ascending order:\n");
  printArray(data, size);
}