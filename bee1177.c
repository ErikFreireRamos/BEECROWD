/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.
 	
N[0] = 0
N[1] = 1
N[2] = 2
N[3] = 0
N[4] = 1
N[5] = 2
N[6] = 0
N[7] = 1
N[8] = 2    entrada 3
...
*/
#include <stdio.h>

int main(){
    int j=0;
    int i,t;

    scanf("%d",&t);

    for (i = 0; i < 1000; i++)
    { 
      if (j==t)
        {
            j=0;
        }
        printf("N[%d] = %d\n",i,j);
        j++;
        
    }
    


   return 0;
}