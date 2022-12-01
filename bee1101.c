/*
Leia um conjunto não determ inado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
*/
#include <stdio.h>

int main(void){

    int m,n,soma,i,j,trans;
    soma=0,m=1,n=1;
    while(1){
        scanf("%d",&m);
        scanf("%d",&n);
        
        if (m<=0 || n<=0)
        {
            break;
        }
        
        if (m>n)
        {
            trans=m;
            m=n;
            n=trans;
        }
        
        for (i = m; i <=n ; i++)
        {
            printf("%d ",i);
            soma+=i;

        }
        printf("Sum=%d\n",soma);
        soma=0;
    }    


    return 0;
}