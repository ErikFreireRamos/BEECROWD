/*
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N].
A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor,
mostrando esta informação.
*/
#include <stdio.h>

int main(void){

    int n,i,valor_m,pos_m=0;

    scanf("%d",&n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
        valor_m=x[0];
    
        for (i = 1; i < n; i++)
        {

        if (valor_m>x[i])
        {
            valor_m=x[i];
            pos_m=i;
            
        }
    }
    
    printf("Menor Valor: %d\n",valor_m);
    printf("Posicao: %d\n",pos_m);

    return 0;
}