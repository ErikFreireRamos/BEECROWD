/*
Gilberto é um famoso vendedor de esfirras na região. Porém, apesar de todos gostarem de suas esfirras, ele só sabe dar o troco 
com duas notas, ou seja, nem sempre é possível receber o troco certo. Para facilitar a vida de Gil, escreva um programa para ele
que determine se é possível ou não devolver o troco exato utilizando duas notas.

As notas disponíveis são: 2, 5, 10, 20, 50 e 100.

Entrada
A entrada deve conter o valor inteiro N da compra realizada pelo cliente e, em seguida, o valor inteiro M pago pelo cliente 
(N < M ≤ 104). A entrada termina com N = M = 0.

Saída
Seu programa deverá imprimir "possible" se for possível devolver o troco exato ou "impossible" se não for possível.
*/
#include <stdio.h>

int main(void){

    int n,m,i,j,troco,p;
    int notas[6]={2,5,10,20,50,100};

    while(scanf("%d %d",&n,&m),n!=0 && m!=0){

    p=0;
    troco=m-n;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (troco==notas[i]+notas[j])
            {
                p=1;
                break;
            } 
            
        }
        
    }

    if (p==1)
    {
        printf("possible\n");
    }
    else if (p==0)
    {
        printf("impossible\n");
    } 
    }
    
    return 0;
}