/* Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.*/
#include <stdio.h>

int main(void){
    
    int n,i;
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
        printf("%d^2 = %d\n",i,i*i);
        }
        
    }
    


    return 0;
}