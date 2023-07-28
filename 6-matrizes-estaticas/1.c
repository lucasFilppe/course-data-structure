//matriz estatica
#include <stdio.h>

int main(){
  int m[2][3] = {{0, 1, 2}, {4,5, 6}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  
  printf("\n\n");
  return 0;
}