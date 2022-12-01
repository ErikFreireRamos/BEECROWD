#include <stdio.h>

int main(void){

    int lados[4],dlados1,dlados2,i,j,comp;

    for (i = 0; i < 4; i++)
    {
        scanf("%d",&lados[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i+1; j < 4; j++)
        {
            if (lados[j]<lados[i])
            {
                comp=lados[i];
                lados[i]=lados[j];
                lados[j]=comp;
            }

            
        }
        
    }
    dlados1=lados[0]+lados[1];
    dlados2=lados[1]+lados[2];

    if (lados[3]<dlados2 || lados[2]<dlados1)
    {
        printf("S\n");
    }
    else printf("N\n");
        
    

    
    return  0;
}