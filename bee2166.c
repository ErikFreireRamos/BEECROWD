/*
Uma das formas de calcular a raiz quadrada de um número natural é pelo método das frações periódicas continuadas.
Esse método usa como denominador uma repetição de frações. Essa repetição pode ser feita uma quantidade específica de vezes.

Por exemplo, ao repetir 2 vezes a fração continuada para calcular a raiz quadrada de 2, temos a fórmula abaixo.

srqt(2) = 1+(1/(2+(1/2)/(3+(1/3)/4+(1/4))...
Sua tarefa é, dado o número N de repetições, calcular o valor aproximado da raiz quadrada de 2.

Entrada
A entrada é um número natural N (0 ≤ N ≤ 100), que indica o número de repetições do denominador na fração continuada.

Saída
A saída é o valor aproximado da raiz quadrada com 10 casas decimais.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    unsigned n,i;
    scanf("%u", &n);

    double r2=0.0;

    for(i = 1; i <= n; i++){

        r2+=2.0;
        r2=1/r2;
    }

    r2+=1.0;

    printf("%.10lf\n", r2);
    return 0;
}
