/*
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.
*/
#include <stdio.h>

int main(void){

    int n,i,x,y;
    float RESTO;

    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        RESTO=x/(float) y;
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
        printf("%.1f\n",RESTO);}
        
    }
    

    return 0;
}