/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
*/
#include <stdio.h>

int main(){

    int i,j,n,x,y,soma,trans;

    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            trans=y;
            y=x;
            x=trans;
        }
        
        for (j=x+1; j < y; j++)
        {
            if (j%2!=0)
            {
                soma+=j;
            }
            
        }
        printf("%d\n",soma);
        soma=0;
    }
    


    return 0;
}