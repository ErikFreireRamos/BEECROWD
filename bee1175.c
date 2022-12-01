/*
Faça um programa que leia um vetor N[20]. 
Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. 
Mostre o vetor modificado.
*/
#include <stdio.h>

int main(){

    int n[20],i,j,v;

    for (i = 0; i < 20; i++)
    {
        scanf("%d",&n[i]);
    }
    for (i = 0,j=19; i < 10; i++,j--)
    {
        v=n[i];
        n[i]=n[j];
        n[j]=v;
    }
    
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    
    
    

    return 0;
}