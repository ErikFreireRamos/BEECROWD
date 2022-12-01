/*
Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 
Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par 
(EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), 
embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
*/
#include <stdio.h>

int main(void){

    int n,i,num;

    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d",&num);
       if(num==0)
            printf("NULL\n");
        else if(num<=0&&num%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(num<=0&&num%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(num>=0&&num%2==0)
            printf ("EVEN POSITIVE\n");
        else if(num>=0&&num%2==1)
            printf ("ODD POSITIVE\n");
    }
    
    return 0;
}