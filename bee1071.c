/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
*/
#include <stdio.h>

int main()
{
 int x, y, soma=0, i;
 int min, max;

 scanf("%d %d",&x,&y);

 if(x < y){
  min = x;
  max = y;
    }else{
  max = x;
  min = y;
 }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0){
   soma += i;
  }
 }

 printf("%d\n", soma);

 return 0;
}