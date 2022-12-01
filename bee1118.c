/*Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. 
O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]).
Cada nota deve ser validada separadamente.
No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) 
indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). 
Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, 
caso contrário o programa deve ser encerrado*/
#include <stdio.h>
int avaliacao();

int main(){

 avaliacao();
}
    int avaliacao(){
    float x,d=0,media=0;
       
    
    while(d!=2)
    {
     scanf("%f",&x);

        if (x>=0 && x<=10)
        {
            d++;
            media+=x;
        }
        else {printf("nota invalida\n");
        }
     
    }
    printf("media = %.2f\n",media/2);
    do
    {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%f",&x);
    if(x==1)
    {
        avaliacao();
    }

     } while((x!=1) && (x!=2));
   
    }