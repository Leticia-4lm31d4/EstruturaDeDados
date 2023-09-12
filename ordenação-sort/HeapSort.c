#include <stdio.h>
  
void trocaElem(int *a, int *b);
void heapify(int arr[], int n, int i);   
void heapSort(int arr[], int n);   
void printArray(int arr[], int n); 
  
// M A I N
int main() 
{
  // Delcaração das variaveis
  int arr[] = {1, 12, 9, 5, 6, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  // Heap Sort
  heapSort(arr, n);

  // Saída
  printf("Sorted array is \n");
  printArray(arr, n);

  return 0;
}

// Declarações das funções
void trocaElem(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int arr[], int n) 
{
  for (int i = 0; i < n; ++i)
  {
    printf("%d ", arr[i]);
    printf("\n");
  }
}

void heapify(int arr[], int n, int i)
{
  // Encontra maior raiz, filha esquerda e filha direita
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  
  if (left < n && arr[left] > arr[largest])
  {
    largest = left;
  }
  if (right < n && arr[right] > arr[largest])
  {
    largest = right;
  }
  // Troca e continua o heapify se raiz não é a maior
  if (largest != i)
  {
    trocaElem(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n) 
{
  // Monta max heap
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(arr, n, i);
  }

  // Heap sort
  for (int i = n - 1; i >= 0; i--)
  {
    trocaElem(&arr[0], &arr[i]);
    // Heapify elemento raiz para pegar uma nova raiz maior
    heapify(arr, i, 0);
  }
}