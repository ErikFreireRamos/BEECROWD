/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000).
Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
*/
#include <stdio.h>
#include <math.h>
int main(){
int n,i,num1,num2,num3;
scanf("%d",&n);

for (i = 1; i <= n; i++)
{   
    i,num2=pow(i,2),num3=pow(i,3);
    printf("%d %d %d\n",i,num2,num3);
}


return 0;
}