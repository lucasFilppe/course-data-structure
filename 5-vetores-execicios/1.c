#include <stdio.h>
#include <stdlib.h>

int main(){

  int n = 5;
  int *v;//declarando ponteiro 
  v = (int*)malloc(n * sizeof(int));//v aponta para a memoria de aloção dinamica e reserva um vetor de tamanho 5

  //atribuindo valores do vetor
  for (int i = 0; i < n; i++)
  {
    v[i] = i;
  }

  //mostrando na tela vetor
  for (int i = 0; i < n; i++)
  {
    printf("v[%d] = %d\n", i, v[i]);
  }
  
  free(v);
    
  return 0;
}