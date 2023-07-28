#include <stdio.h>
#include <stdlib.h>

int main(){
  int v1[5] = {0, 1, 2, 3, 4};//vetor estatico

  int *v2, *p; //ponteiros
  int i;

  p = v1;
  p[3] = p[4] = 10;

  v2 = (int *)malloc(5 * sizeof(int));

  for (i = 0; i < 5; i++)
  {
    v2[i] = v1[i];
    printf("v2[%d] = %d\n", i, v2[i]);
  }
  
  printf("\n\n");

  free(v2);
  v2 = NULL;

  return 0;
}