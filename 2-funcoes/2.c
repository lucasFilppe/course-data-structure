//passagem por referencia

#include <stdio.h>

int soma(int x, int y, int *z){
    *z = x + y;
}
int main(){
 
    int a = 10, b = 20, c;
    
    soma(a, b, &c);
    
    printf("O valor da soma eh: %d\n" , c);

  return 0;
}