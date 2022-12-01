/*
A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. 
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.
*/
#include <stdio.h>

int main(){

    int n,x=0,y=1,cont,i;
// F(n + 2) = F(n + 1) + F(n) , com n ≥ 1 e F(1) = F(2) = 
    scanf("%d",&n);
    printf("0 1 ");
    for (i = 3; i <= n; i++)
    {
        cont=x+y;
        x=y;
        y=cont;
        if (i!=n)
        {
            printf("%d ",cont);
        }
        else{
            printf("%d\n",cont);
        }
           
    }
    
    



    return 0;
}