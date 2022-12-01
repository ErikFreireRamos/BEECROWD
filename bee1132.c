/*
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y,
 incluindo ambos.
*/
#include <stdio.h>

int main(void){
int x,cont,y,i,tot13=0,tot_soma=0;

scanf("%d %d",&x,&y);

if (x>y)
{
    cont=x;
    x=y;
    y=cont;
}
for (i = x; i <= y; i++)
{
    if (i%13!=0)
    {
            tot_soma+=i;
    }
}  
    printf("%d",tot_soma);

return 0;
}