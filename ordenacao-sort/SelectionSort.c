#include <stdio.h>

int main()
{
  // Declaracao das variaveis
  int qntd, nums[10000], maior, posicao;

  // Entrada
  scanf("%d", &qntd); 
  for (int i = 0; i < qntd; i++) {
    scanf("%d", &nums[i]);
  }

  // Selection Sort
  maior = 0, posicao = 0;

  for (int j = qntd; j > 0; j--){
    for (int i = 0; i < j; i++){

      if ( nums[i] > nums[j-1]){
        /* encontrar o maior numero da sequencia "atual" */
        maior = 0;
        maior = nums[i];
        posicao = i;

        /* trocar posicao do maior "atual" com o na posição dele */
        nums[posicao] = 0;
        nums[posicao] = nums[j-1];
        nums[j-1] = 0;
        nums[j-1] = maior;
      }      
    }
    /*
    for (int i = 0; i < qntd; i++){
      printf("%d ", nums[i]);
    }
    printf("\n maior = %d\n posicao = %d\n", maior, posicao);
    */
  }

  // Saida
  for (int i = 0; i < qntd; i++){
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}