/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo.\
 O último dado, que não entrará nos cálculos, contém o valor de idade negativa. 
 Calcular e imprimir a idade média deste grupo de indivíduos.
*/
#include <stdio.h>

int main(){
int idade=0,idade_tot=0;
float ind=0,media=0;
    while (1)
    {
        scanf("%d",&idade);
        if (idade<0)
        {
            break;
        }
        else{
        idade_tot+=idade;
        ind++;}
    }

    media=idade_tot/ind;
    printf("%.2f\n",media);
    
    return 0;
}