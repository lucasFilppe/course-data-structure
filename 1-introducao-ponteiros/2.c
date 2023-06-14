//ponteiros de ponteiros

#include <stdio.h>

int main(){
  int a = 10;
  int *p1 = &a;
  int **p2 = &p1;

  printf("Endereço de memoria de &a = %p, a = %d \n", &a, a);
  printf("Endereço de memoria de &p1 = %p, p1 = %p, *p1 = %d \n", &p1, p1, *p1);
  printf("Endereço de memoria de &p2 = %p, p2 = %p, *p2 = %p, **p2 = %d \n\n", &p2, p2, *p2, **p2);

  **p2 = 99;

  printf("Endereço de memoria de &a = %p, a = %d \n", &a, a);
  printf("Endereço de memoria de &p1 = %p, p1 = %p, *p1 = %d \n", &p1, p1, *p1);
  printf("Endereço de memoria de &p2 = %p, p2 = %p, *p2 = %p, **p2 = %d \n\n", &p2, p2, *p2, **p2);



  return 0;
}