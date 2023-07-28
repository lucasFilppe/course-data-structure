//matrizes dinamicas
//matriz estatica
#include <stdio.h>
#include <stdlib.h>

int main(){
  int linhas = 2;
  int colunas = 3;
  int count = 0;
  //alocação dinamica de matrizes
  int **m = (int**)calloc(linhas, sizeof(int*));

  //para cada linha da matriz
  for (int i = 0; i < linhas; i++)
  {
    m[i] = (int*)calloc(colunas, sizeof(int)); 
  }
  
  printf("&m = %p, m = %p\n\n", &m, m);
  printf("\n\n");

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      m[i][j] = count;
      count ++;
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");
  
  return 0;
}