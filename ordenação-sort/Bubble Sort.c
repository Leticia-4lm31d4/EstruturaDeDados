#include <stdio.h>

int main()
{
  // Declaracao das variaveis
  int i, j, maiorNum, nums[10000], temp;

  // Entrada
  scanf("%d", &maiorNum); 
  for (i = 0; i < maiorNum; i++)
  {
    scanf("%d", &nums[i]);
  }

  // Bubble Sort
  temp = 0;

  // Verifica n vezes a sequencia
  for (j = 0; j < maiorNum-1; j++)
  {
    // Verifica 1 vez a sequencia
    for (i = 0; i < maiorNum-1; i++)
    {
      if (nums[i] > nums[i+1])
      {
        temp = nums[i];
        nums[i] = 0;
        nums[i] = nums[i+1];

        nums[i+1] = 0;
        nums[i+1] = temp;

        temp = 0;
      }
    }
  }

  // Saida
  for (i = 0; i < maiorNum; i++) 
  {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}
