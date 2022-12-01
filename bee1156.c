/*Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?*/
#include <stdio.h>

int main(){

    double i,j,s=0;

    for (i = 1,j=1; i <=39; i+=2,j*=2)
    {   
        s+=(i/j);

    }
        printf("%.2lf\n",s);    


    return 0;
}