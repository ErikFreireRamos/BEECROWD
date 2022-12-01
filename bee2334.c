/*
Entrada
Haverá vários casos de testes, a primeira linha de cada caso de teste contém um inteiro (0 ≤ P ≤ 1019) representando a quantidade total de patos, 
a entrada termina com P = -1.

Saída
O arquivo de saída deve conter a quantidade de patinhos que retornaram.
*/
#include <stdio.h>

int main(void){

    long long int p;

    while(scanf("%llu",&p),p!=-1){

        if (p==0)
        {
            printf("0\n");
        }
        else{
            printf("%llu\n",p-1);
        }
        
    }


    return 0;
}