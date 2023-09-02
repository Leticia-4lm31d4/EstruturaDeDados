#include <stdio.h>

// Protótipo das Funções
void trocaElementos(int *a, int *b);
int partition(int array[], int low, int high); 
void quickSort(int array[], int low, int high); 
void printArray(int array[], int size); 

// M A I N
int main() 
{
  // Declaração das Variaveis
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array:\n");
  printArray(data, n);
  
  // Quick Sort
  quickSort(data, 0, n - 1);
  
  // Saída
  printf("Sorted array in ascending order: \n");
  printArray(data, n);

  return 0;
}

// Declaração das Funções
void trocaElementos(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int partition(int array[], int low, int high)
{
  // Pivo = elemento mais a direita
  int pivot = array[high];
  // Ponteiro para maior elemento
  int i = (low - 1);

  // Compara o pivo com os outros elementos
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      // Se elemento < pivo, troca com o em 'i'
      i++;
      // Troca elementode i com o de j
      trocaElementos(&array[i], &array[j]);
    }
  }

  // Troca o pivo com o maior elemento em i
  trocaElementos(&array[i + 1], &array[high]);
  
  // Retorna p/ o ponto da func partition
  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {    
    /* Encontra o pivo
    Elemento < pivo >> esquerda do pivo
    Elemento > pivo >> direita do pivo*/
    int pivo = partition(array, low, high);
    
    // Recursão
    quickSort(array, low, pivo - 1);
    quickSort(array, pivo + 1, high);
  }
}