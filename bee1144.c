/*
Escreva um programa que leia um valor inteiro N. N * 2 linhas de saída serão apresentadas na execução do programa, 
seguindo a lógica do exemplo abaixo. Para valores com mais de 6 dígitos, todos os dígitos devem ser apresentados.
1 1 1
1 2 2
2 4 8
2 5 9
3 9 27
3 10 28
4 16 64
4 17 65
5 25 125
5 26 126        Entrada 5
*/
#include <stdio.h>

int main(void){

    int n,i,num2,num3,b,c;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        num2=pow(i,2),num3=pow(i,3);
    printf("%d %d %d\n",i,num2,num3);
    b=num2+1,c=num3+1;
    printf("%d %d %d\n",i,b,c);

    }
    
}