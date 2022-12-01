/*
Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), correspondente a ordem de uma matriz M de inteiros, 
e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas.
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
Os valores das matrizes devem ser formatados em um campo de tamanho T justificados à direita e separados por espaço,
onde T é igual ao número de dígitos do maior número da matriz. Após o último caractere de cada linha da matriz 
não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.

1  2  4  8
2  4  8 16
4  8 16 32
8 16 32 64
*/
#include <stdio.h>

int main(){

    int tamanho,i,j,valor,mult,digitos=0,m_ultimo;

    while (1)
    {
    
    scanf("%d",&tamanho);
    if (tamanho == 0)
		{	return 0;
    }
    int m[tamanho][tamanho];

    mult=1;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            
            m[i][j]=mult;
                mult*=2;
        }
        mult=(m[i][0])*2;
    }
    m_ultimo=(m[tamanho-1][tamanho-1]);
    digitos=0;
    do
    {
        m_ultimo%10;
        m_ultimo=m_ultimo/10;
        digitos++;

    } while (m_ultimo>0);

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (j==0)
            {
                printf("%*d",digitos,m[i][j]);
            }
            else{
                printf(" %*d",digitos,m[i][j]);
            }
            
        }
        printf("\n");
    }
    printf("\n");
    
    }


    return 0;
}
