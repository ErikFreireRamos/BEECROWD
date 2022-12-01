/*
Ana e suas amigas estão fazendo um trabalho de geometria para o colégio, em que precisam formar vários triângulos, numa cartolina, 
com algumas varetas de comprimentos diferentes. Logo elas perceberam que não dá para formar triângulos com três varetas de comprimentos quaisquer:
 se uma das varetas for muito grande em relação às outras duas, não dá para formar o triângulo.

Neste problema, você precisa ajudar Ana e suas amigas a determinar se, dados os comprimentos de quatro varetas, é ou não é possível selecionar três varetas,
 dentre as quatro, e formar um triângulo.

Entrada
A entrada é composta por apenas uma linha contendo quatro números inteiros A, B, C e D (1 ≤ A, B, C, D ≤ 100).

Saída
Seu programa deve produzir apenas uma linha contendo apenas um caractere, que deve ser ‘S’ caso seja possível formar o triângulo, ou ‘N’ 
caso não seja possível formar o triângulo.
*/
#include <stdio.h>

int main(){

    int i,j,lado[4],ladomaior=0,doislados=0;
        
    for (i = 0; i < 4 ; i++)
    {
        scanf("%d",&lado[i]);
        if (lado[i]>ladomaior)
        {
            ladomaior=lado[i];
        }    
    }
    printf("%d\n",ladomaior);
    while (ladomaior>doislados){
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
    {   
        if (lado[i]==ladomaior)
        {
            i++;
        }
        if (lado[j]==ladomaior)
        {
            j++;
        }
        printf("%d %d %d\n",lado[i],lado[j],ladomaior);
         
        if (i!=j)
        {
            
            doislados=lado[i]+lado[j];
            if(ladomaior<doislados){
                
                printf("S\n");
                return 0;
        }
        }

    }
    }
    printf("N\n");
    return 0;
    }
}