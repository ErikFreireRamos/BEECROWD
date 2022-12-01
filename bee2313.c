/*
Dados três valores, verifique se os três podem formar um triângulo. Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um 
triângulo retângulo ou não.

Entrada
A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).

Saída
A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo. Se os valores formarem um triângulo a saída deve ser "Valido-Equilatero", 
"Valido-Escaleno" ou "Valido-Isoceles" de acordo com a característica do triângulo seguido de "Retangulo: S" se o triângulo for retângulo ou "Retangulo: N" se não for, 
conforme os exemplos.
*/
#include <stdio.h>

int main(void){

    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a+b<=c || a+c<=b || b+c<=a){
        printf("Invalido\n");
    }else{
        if(a==b && b==c){
            printf("Valido-Equilatero\n");
        }else if(a==b || b==c || a==c){
            printf("Valido-Isoceles\n");
        }else{
            printf("Valido-Escaleno\n");
        }
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("Retangulo: S\n");
        }else{
            printf("Retangulo: N\n");
        }
    }
    
    return 0;
}