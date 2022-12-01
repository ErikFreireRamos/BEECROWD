/*
Você tem em mãos dois cabos circulares de energia. O primeiro cabo tem raio R1 e o segundo raio R2.
Você precisa comprar um conduite circular

Qual o menor raio do conduite que você deve comprar? Em outras palavras, dado dois círculos,
qual o raio do menor círculo que possa englobar ambos os dois?

Entrada
Na primeira linha teremos um inteiro T (T ≤ 10000), indicando o número de casos de teste.
Na única linha de cada caso teremos dois números inteiros R1 e R2, indicando os respectivos raios.
Os inteiros serão positivos e todas as contas caberão em um inteiro normal de 32 bits.

Saída
Em cada caso, imprima o menor raio possível em uma única linha
Exemplo de Entrada*/
#include <stdio.h>

int main(void){

    int r1,r2,r3,teste,i;

    scanf("%d",&teste);
    for(i=0;i<teste;i++)
    {
    scanf("%d %d",&r1,&r2);

    r3=r1+r2;
    printf("%d\n",r3);
    }

    return 0;
}