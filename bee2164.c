/*
A fórmula de Binet é uma forma de calcular números de Fibonacci.

Fibonacci=((1+√5)/2)^n - (1-√5)/2)^n)/√5

Sua tarefa é, dado um natural n, calcular o valor de Fibonacci(n) usando a fórmula acima.

Entrada
A entrada é um número natural n (0 < n ≤ 50).
Saída

A saída é o valor de Fibonacci(n) com 1 casa decimal utilizando a fórmula de Binet dada.
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    int n;

    scanf("%d", &n);
    
    float formula = (pow(((1 + sqrt(5))/2), n) - pow(((1 - sqrt(5))/2), n)) / sqrt(5);
    
    printf("%.1f\n", formula);
    return 0;
}
