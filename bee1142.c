/*
Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas
na execução do programa.
*/
#include <stdio.h>
int main(){

int n,i;
scanf("%d",&n);
for (i = 1; i <=n*4; i+=4)
{
    printf("%d %d %d PUM\n",i,i+1,i+2);
}
return 0;
}

