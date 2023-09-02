#include <stdio.h>
#include <string.h>

typedef struct TNomes { char nome[20]; } TNomes;

int main()
{
  TNomes nomes[20];
  int qntd;

  scanf("%d", &qntd);
  
  for (int i = 0; i < qntd; i++)
  {
    scanf("%s", nomes[i].nome);
  }

  // Bubble sort
  char temp[20];

  // Bubble sort
  for(int i = 0; i < qntd; i++)
  {
    for(int j = 0; j < qntd; j++)
    {
      if(strcmp(nomes[j].nome, nomes[j+1].nome) > 0)
      {
        strcpy(temp, nomes[j].nome);
        strcpy(nomes[j].nome, nomes[j+1].nome);
        strcpy(nomes[j+1].nome, temp);
      }
    }
  }

  // Saida Terminal
  for(int i = 1; i <= qntd; i++)
  {
    printf("%s\n", nomes[i].nome);
  }

  return 0;
}