#include <stdio.h>

/* Protótipos das Funções */

// Divide o vetor em dois, ordena e junta
void mergeSort(int vet[], int inicio, int fim); 
// Merge dois vetores em um 
void merge(int vet[], int nMin, int nMeio, int nMax); 
// Imprime Vetor
void printArray(int vet[], int tamanho);

// M A I N 
int main()
{
  // Declaração das variaveis
  int tamanho, nums[10000];
  //int tamanho = sizeof(nums) / sizeof(nums[0]);
  
  // Entrada
  printf("Tamanho da sequencia: ");
  scanf("%d", &tamanho);
  puts("Sequencia a ser ordenada:\n");

  for(int i = 0; i < tamanho; i++)
  {
    scanf("%d", &nums[i]);
  }

  // Chama função
  mergeSort(nums, 0, tamanho - 1);

  // Saida
  printf("Sequencia ordenada: \n");
  printArray(nums, tamanho);

  return 0;
}

// Declaração das Funções
void mergeSort(int vet[], int inicio, int fim)
{
  if (inicio < fim) 
  {
    int metade = inicio + (fim - inicio) / 2;

    mergeSort(vet, inicio, metade);
    mergeSort(vet, metade + 1, fim);

    // Merge os vetores ordenados
    merge(vet, inicio, metade, fim);
  }
}

void merge(int vet[], int nMin, int nMeio, int nMax) 
{
  // Criar L ← A[nMin..nMeio] e M ← A[nMeio+1..nMax]
  int n1 = nMeio - nMin + 1;
  int n2 = nMax - nMeio;
  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)  {    L[i] = vet[nMin + i];  }
  for (int j = 0; j < n2; j++)  {    M[j] = vet[nMeio + 1 + j];  }

  // Manter o index dos semivetores e vetor principal
  int i = 0, j = 0, k = nMin;

  // Até chegar o fim de um dos vetores, ordenar elementos na junção
  while (i < n1 && j < n2) 
  {
    if (L[i] <= M[j])
    {
      vet[k] = L[i];
      i++;
    } else {
      vet[k] = M[j];
      j++;
    }
    k++;
  }

  // Completar a junção com o resto do que ainda tem
  while (i < n1)
  {
    vet[k] = L[i];
    i++; k++;
  }

  while (j < n2)
  {
    vet[k] = M[j];
    j++; k++;
  }
}

void printArray(int vet[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", vet[i]);
  }
  printf("\n");
}