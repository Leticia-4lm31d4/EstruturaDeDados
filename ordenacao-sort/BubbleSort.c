#include <stdio.h>

int main() {
  // Declaracao das variaveis
  int qntd, nums[10000], temp;

  // Entrada
  scanf("%d", &qntd); 
  for (int i = 0; i < qntd; i++) {
    scanf("%d", &nums[i]);
  }

  // Verifica n vezes a sequencia
  for (int j = 0; j < qntd-1; j++){
    // Verifica 1 vez a sequencia
    for (int i = 0; i < qntd-1; i++){
      // compara com o da direita
      if (nums[i] > nums[i+1]) {
        temp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = temp;
      }
    }/*
    for (int i = 0; i < qntd; i++) {
      printf("%d ", nums[i]);
    }
    printf("\n");*/
  }

  // Saida
  for (int i = 0; i < qntd; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}
