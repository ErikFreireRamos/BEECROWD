/*
Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.

Entrada
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas) de uma matriz que deve ser impressa.

Saída
Para cada N lido, apresente a saída conforme o exemplo fornecido.
1332        
3123
3213
2331 Entrada 4
*/

#include <stdio.h>

int main(){

    int tamanho,i,j;

    while (scanf("%d",&tamanho)!=EOF)
    {    
        int m[tamanho][tamanho];
        //preenchendo todos os pontos com 3
        for (i = 0; i < tamanho; i++)
        {
            for (j = 0; j < tamanho; j++)
            {
                if (i==j)
                {
                    m[i][j] = 1;
                }
                if (i+j==tamanho-1)
                {
                    m[i][j] = 2;
                }
                else
                {
                    m[i][j] = 3;
                }	
            }
            
        }
        for (i = 0; i < tamanho; i++)
        {
            for (j = 0; j < tamanho; j++)
            {
                printf("%d",m[i][j]);
            }
            printf("\n");
        }
        
        
        }



    return 0;
}