/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.
*/
#include <stdio.h>

int main(){

    int x,y;
    while (1)
    {
        scanf("%d %d",&x,&y);
        
        if (x==y)
        {
            break;
        }
        else if (x>y)
        {
            printf("Decrescente\n");
        }
        else if (x<y)
        {
            printf("Crescente\n");
        }
        
    }
        


    return 0;
}