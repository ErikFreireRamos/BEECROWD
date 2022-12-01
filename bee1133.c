/*Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles 
cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.*/
#include <stdio.h>

int main(){
int x,y,cont,i;

scanf("%d %d",&x,&y);
if (x>y)
{
    cont=x;
    x=y;
    y=cont;
}
for (i = x+1; i < y; i++)
{
    if (i % 5 == 2 || i % 5 == 3)
    {
        printf("%d\n",i);
    }
    
}
return 0;
}