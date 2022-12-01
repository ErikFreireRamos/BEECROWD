/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. 
Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1,
 os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.
*/
#include <stdio.h>

int main(){

    int x[10],i,v;

    scanf("%d",&v);

    for (i=0; i < 10; i++)
    {
        x[i]=v;
        v*=2;
    }
    for ( i = 0; i < 10; i++)
    {
        
    printf("N[%d] = %d\n",i,x[i]);

    }


    return 0;
}