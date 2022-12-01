/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido.
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele.
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), 
correspondente ao N-esimo termo da série de Fibonacci.

*/
#include <stdio.h>

int main(){

int fib[60],T,N,i,j,cont;

scanf("%d",&T);

for (i = 1; i <= T; i++)
{
    scanf("%d",&N);
    for (i = 3; i < N; i++)
    {
    fib[i+1]=fib[i]+fib[i-1];

    }
}


    return 0;
}