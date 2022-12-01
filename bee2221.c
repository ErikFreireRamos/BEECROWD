/*
Depois de capturar muitos Pomekons, Dabriel e Guarte resolveram batalhar. A forma de duelo é simples, 
cada treinador coloca um Pomekon na batalha e vence quem tem o Pomekon com maior valor de golpe, que é definido da seguinte 

maneira: valorgolpe=(ataque+defesa)/2 +bonus

O Bônus será dado ao Pomekon do treinador que estiver em um level de valor par.
Neste problema será dado a você o valor do bônus aplicado, os valores de ataque e defesa do Pomekon de Dabriel e Guarte e seus
respectivos níveis, cabe a você informar o ganhador da batalha.

Entrada
A entrada é composta por diversas instâncias. A primeira linha da entrada contém um inteiro T indicando o número de instâncias. 
Cada instância começa com um inteiro B (0 ≤ B ≤ 100), que indica o valor do bônus aplicado. Nas duas linhas seguintes terão 
três inteiros Ai, Di e Li (1 ≤ Ai, Di ≤ 100, 1 ≤ Li ≤ 50), representado o valor de ataque do Pomekon, o valor de defesa e o 
level do treinador. A primeira linha representa o Pomekon de Dabriel e a segunda o de Guarte.

Saída
Para instância na entrada você deverá imprimir o nome do treinador que irá vencer a batalha, em caso de empate imprima: "Empate",
sem aspas.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    int t, b, a1, d1, l1, a2, d2, l2,i;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &b);
        scanf("%d %d %d", &a1, &d1, &l1);
        scanf("%d %d %d", &a2, &d2, &l2);
        
        int golpe1 = (a1+d1)/2;
        if(l1%2==0){
            golpe1 += b;
        }
        int golpe2 = (a2+d2)/2;
        if(l2%2==0){
            golpe2 += b;
        }
        if(golpe1>golpe2){
            printf("Dabriel\n");
        }else if(golpe1<golpe2){
            printf("Guarte\n");
        }else{
            printf("Empate\n");
        }
    }
    return 0;
}