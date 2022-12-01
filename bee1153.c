/*
Ler um valor N. Calcular e escrever seu respectivo fatorial.
 Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.
*/
#include <stdio.h>

int main(){
    int i,n,comp=1;
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        comp*=i;

    }
    printf("%d\n",comp);
    
    


    return 0;
}