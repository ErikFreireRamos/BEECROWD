/*
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios 
(excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6.
 Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.
*/
#include <stdio.h>

int main(){

    int num,i,j,n,soma_np=0;

    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
    scanf("%d",&num);
    for (j = 1; j < num; j++)
    {
        if(num%j==0){
            soma_np+=j;
        }
    }
    if (soma_np==num)
    {
        printf("%d eh perfeito\n",num);
    }
    else{
        printf("%d nao eh perfeito\n",num);
    }
    soma_np=0;
    
    }

    return 0;
}