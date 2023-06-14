//passagem por valor
#include <stdio.h>

int soma(int x, int y){
    return x + y;
}
int main(){
 
    int a = 10, b = 20;
    
    int c = soma(a, b);
    
    printf("O valor da soma eh: %d\n",c);

  return 0;
}