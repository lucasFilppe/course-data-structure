/*Crie um programa que recebi o ponteiro d eum vetor e seu tamanho
e imprima os elementos do vetor. Crie uma função que recebi o ponteiro de um vetor via  
*/
#include<stdio.h>
#include <stdlib.h>


void somaVetor(int v[], int n, int escalar){
  for (int i = 0; i < n; i++)
  {
    v[i] += escalar;
  }
  
}

void imprimeVetor(int *vs, int n){
  for (int i = 0; i < n; i++)
  {
    printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
  }
  printf("\n\n");
}

void desalocaVetor(int *v, int n){
  free(v);
  v =NULL;
}

int main(){

  int v[5] = {1, 2, 3, 4, 5};

  imprimeVetor(v, 5);
  somaVetor(v, 5, 2);
  imprimeVetor(v, 5);

  int *vc = calloc(5, sizeof(int));
  printf("VETOR Dinamico com  calloc: \n");
  for (int i = 0; i < 5; i++)
  {
    vc[i] = i * 100;
  }
  
  imprimeVetor(vc, 5);
  somaVetor(vc, 5, 2);
  imprimeVetor(vc, 5);

  desalocaVetor(vc, 5);

  return 0;
}