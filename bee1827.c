/*
Neste programa seu trabalho é ler um valor inteiro que será o tamanho da matriz quadrada (largura e altura) que será preenchida da seguinte forma:
a parte externa é preenchida com 0, a parte interna é preenchida com 1, a diagonal principal é preenchida com 2, a diagonal secundária é preenchida 
com 3 e o ponto central contém o valor 4, conforme os exemplos abaixo.
Obs: o quadrado com '1' sempre começa na posição tamanho/3, tanto na largura quanto quanto na altura. A linha e a coluna começam em zero (0).

Entrada
A entrada contém vários casos de teste e termina com EOF (fim de arquivo. Cada caso de teste consiste de um valor inteiro ímpar N (5 ≤ N ≤ 101)
que é o tamanho da matriz.

Saída
Para cada caso de teste, imprima a matriz correspondente conforme o exemplo abaixo. Após cada caso de teste, imprima uma linha em branco.
20003   
01110
01410
01110   Entrada 5
30002

*/
#include <stdio.h>
int main(void){

    int tamanho=0,i,j,fim_interno;

    while (scanf("%d",&tamanho)!=EOF)
    {
        int m[tamanho][tamanho];
        fim_interno=tamanho-tamanho/3;

        for (i = 0; i < tamanho; i++)
        {
            for (j = 0; j < tamanho; j++)
            {
                //preenchendo parte externa

                    if (i+j==tamanho-1)
                    {
                        m[i][j]=3;
                    }
                    else if (i==j)
                    {
                        m[i][j]=2;
                    }
                    else
                        m[i][j]=0;
            }
        }
                
        for (i = tamanho/3; i < fim_interno; i++)
        {
            for (j = tamanho/3; j < fim_interno; j++)
            {
                m[i][j]=1;
                //preenchendo a parte  interna;
                    if (i==tamanho/2 && j==tamanho/2)
                    {
                    m[i][j]=4;
                    }
                    
                    
            }
        }    
        //exibindo a matriz
        
        for (i = 0; i < tamanho; i++)
        {
            for (j = 0; j < tamanho; j++)
            {
                
                printf("%d",m[i][j]);
                
            }
            printf("\n");
        }
        printf("\n");
    
    }

    return 0;
}