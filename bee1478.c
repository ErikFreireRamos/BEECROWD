/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, 
e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. 
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. (
os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço.
Após o último caractere de cada linha da matriz não deve haver espaços em branco. 
Após a impressão de cada matriz deve ser deixada uma linha em branco.
 
  1   2   3   4
  2   1   2   3
  3   2   1   2     [0][1]=col+1-lin    [1][2]=2+1-1
  4   3   2   1
*/
#include <stdio.h>

int main(){

 int lin,col,n;

    while(1)
    {
    scanf("%d",&n);
   int  M[n][n];

    if (n==0)
    {
        return 0;
    }
    
    for (lin = 0; lin < n; lin++){       
    for ( col = 0; col < n; col++)
    {
    if(lin == col){
	M[lin][col]=1;
        }
	if(lin>col){
	M[lin][col]=lin+1-col;}

	if(lin<col){
	M[lin][col]=col+1-lin;
    }
}
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