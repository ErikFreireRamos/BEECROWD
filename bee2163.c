/*
Há muito tempo atrás, em uma galáxia muito, muito distante...

Após o declínio do Império, sucateiros estão espalhados por todo o universo procurando por um sabre de luz perdido. 
Todos sabem que um sabre de luz emite um padrão de ondas específico: 42 cercado por 7 em toda a volta. 
Você tem um sensor de ondas que varre um terreno com N x M células. Veja o exemplo abaixo para um terreno 4 x 7 com um sabre de 
luz nele (na posição (2, 4)).

Você deve escrever um programa que, dado um terreno N x M, procura pelo padrão do sabre de luz nele. 
Nenhuma varredura tem mais do que um padrão de sabre de luz.

Entrada
A primeira linha da entrada tem dois números positivos N e M, representando, respectivamente, o número de linhas e de 
colunas varridos no terreno (3 ≤ N, M ≤ 1000). Cada uma das próximas N linhas tem M inteiros, que descrevem os valores 
lidos em cada célula do terreno (-100 ≤ Tij ≤ 100, para 1 ≤ i ≤ N e 1 ≤ j ≤ M).

Saída
A saída é uma única linha com 2 inteiros X e Y separados por um espaço. Eles representam a coordenada (X,Y) do sabre de luz, caso encontrado. Se o terreno 
não tem um padrão de sabre de luz, X e Y são ambos zero.
*/
#include <stdio.h>

int main(void){


    int linha_max,coluna_max,i,j;

    scanf("%d %d",&linha_max,&coluna_max);

    int matriz[linha_max][coluna_max];

    for (i = 0; i < linha_max; i++)
    {
        for (j = 0; j < coluna_max; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
        
    }
    //checando se existe o numero 42 e se existe um numero 7 em toda a volta

    for (i = 0; i < linha_max; i++)
    {
        for (j = 0; j < coluna_max; j++)
        {
            if (matriz[i][j] == 42)
            {
                if (i-1 >= 0 && j-1 >= 0 && i+1 < linha_max && j+1 < coluna_max)
                {
                    if (matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7)
                    {
                        printf("%d %d\n",i+1,j+1);
                        return 0;
                    }
                }
            }
        }
    }
    printf("0 0\n");





    return 0;
}