/*
Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. 
Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, 
você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. 
Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, 
imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.
*/
#include <stdio.h>

int main(){

    int n=0,par[5],impar[5];
    int i,j,cont_p=0,cont_i=0;
    for ( i = 0; i < 15; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            par[cont_p]=n;
            cont_p++;
        }
        else if (n%2!=0)
        {
            impar[cont_i]=n;
            cont_i++;
        }

        if (cont_p==5)
        {   
            cont_p=0;

            for ( j = 0; j < 5; j++)
            {
            printf("par[%d] = %d\n",j,par[j]);

        }
        }

        if (cont_i==5)
        {
            cont_i=0;

            for ( j = 0; j < 5; j++)
            {
            printf("impar[%d] = %d\n",j,impar[j]);
        }
        }
        
    }
    
    for ( j = 0; j < cont_i; j++)
            {
            printf("impar[%d] = %d\n",j,impar[j]);
            }

    for ( j = 0; j < cont_p; j++)
            {
            printf("par[%d] = %d\n",j,par[j]); 
            }



    return 0;
}