/*Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1).
Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.*/
#include <stdio.h>

int main(){

    int a,n=0,i,soma=0;

    scanf("%d",&a);
    while (n<=0)
    {
    scanf("%d",&n);
    }
    
    for (i = 0; i < n; i++)
    {   
        soma+=i+a;
    }
    printf("%d\n",soma);


    return 0;
}