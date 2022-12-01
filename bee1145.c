/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, 
passando para a próxima linha a cada X números.
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99    Entrada 3 99
*/
#include <stdio.h>

int main(){
int x=0,y,i,j=0;

scanf("%d %d",&x,&y);

for (i = 1; i <= y; i++)
{
    j++;
    if(j==x){    
    printf("%d\n",i);
    j=0;
    }
    else printf("%d ",i);

}
return 0;
}