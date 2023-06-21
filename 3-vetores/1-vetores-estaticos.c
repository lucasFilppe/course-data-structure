//vetor estatico
#include <stdio.h>

int main(){

  int i;
  int v[5];

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &v[i]);
  }
   
  for ( i = 0; i < 5; i++)
  {
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}