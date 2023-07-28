#include <stdio.h>
#include <stdlib.h>

int main(){
  //alocação de um vetor estatico(memoria stack)
  int vs[5] = {1, 2, 3 , 7, 8};

  printf("VETOR ESTATICO: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
  }
  printf("\n\n");

  //alocação de um vetor dinamico usando malloc(memoria heap)
  int *vh = malloc(5 * sizeof(int));

  printf("VETOR Dinamico: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("&vh[%d] = %p, vh[%d] = %d\n", i, &vh[i], i, vh[i]);
  }
  
  printf("\n\n");


  //alocação de um vetor dinamico usando calloc(memoria heap)
  //garaente que todo bloco alocado sera
  int *vc = calloc(5,sizeof(int));

  printf("VETOR Dinamico com  calloc: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("&vc[%d] = %p, vc[%d] = %d\n", i, &vc[i], i, vc[i]);
  }
  
  printf("\n\n");
  return 0;
}