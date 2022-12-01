/*Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.*/

#include <stdio.h>
int main(){

int i,num[100],num_maior=0,pos=0;

for (i = 0; i <100; i++)
{
    scanf("%d",&num[i]);
}

    for (i = 0; i <100; i++)
    {
    if (num[i]>num_maior)
    {
        num_maior=num[i];
        pos=i+1;      
    }
    }
    
printf("%d\n",num_maior);
printf("%d\n",pos);


    return 0;
}