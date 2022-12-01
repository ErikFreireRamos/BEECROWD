/*Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100*/
#include <stdio.h>

int main(){

float s=0,j;

for (j=1; j <=100; j++)
{
    s+=1/j;
}
printf("%.2f\n",s);

    return 0;
}