/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral.
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]).
Cada nota deve ser validada separadamente.
*/
#include <stdio.h>

int main(void){

    float n1,media=0,cont=0;

    do
    {
        scanf("%f",&n1);
        if (n1 <= 0 || n1 >= 10)
        {
            printf("nota invalida\n");
        }
        else{
            cont++;
            media+=n1;
        }
        
    } while (cont!=2);
    printf("media = %.2f",media/2);

    return 0;
}