/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros,
 e construa a matriz de acordo com o exemplo abaixo.

 Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
 O final da entrada é marcado por um valor de ordem igual a zero (0).

Saida 
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
 Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. 
 Após o último caractere de cada linha da matriz não deve haver espaços em branco. 
 Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/
#include <stdio.h>

int main(){

unsigned short int lin,col,matriz_ini,matriz_f,n,num;

    while(1)
    {
    scanf("%hd",&n);
    int M[n][n];

    if (n==0)
    
        return 0;
    
    
    matriz_ini=0;
    matriz_f=n;
    num=1;
    
    while(1)
    {
    for (lin = matriz_ini; lin < matriz_f; lin++)
    for ( col = matriz_ini; col < matriz_f; col++)
    
        M[lin][col]=num;
    if (matriz_f==0)
    
        break;
    

        matriz_f--;
        matriz_ini++;
        num++;
    
       
    
    }
    for (lin = 0; lin < n; lin++)
    {
    for ( col = 0; col < n; col++)
    {
        if (col==0)
        {
            printf("%3d",M[lin][col]);
        }   
        else printf(" %3d",M[lin][col]);
    }
    printf("\n");
    }
    printf("\n");
    }
}