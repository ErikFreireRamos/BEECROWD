/*
Fiddlesticks é um campeão do jogo League of Legends e tem como sua habilidade ultimate a "Tempestade de Corvos", 
ela funciona da seguinte maneira:

Primeiro Fiddlesticks escolhe um local estratégico e prontamente ele se prepara para ressurgir em uma direção até uma certa 
distância, então ele se enraiza e canaliza a ultimate por exatamente 1.5 segundos, após esse tempo ele ressurge imediatamente no 
local alvo com uma revoada de corvos voando ao seu redor e causando muito dano.

Fiddlesticks quer sua ajuda para saber se de uma certa posição é possível atingir um invasor com sua habilidade ultimate.

Obs: Considere que Fiddlesticks sempre luta exatamente na direção do invasor e o invasor sempre tenta fugir na direção contrária 
a Fiddlesticks, em velocidade constante.

Entrada
A entrada é composta de várias linhas, cada linha contém os seguintes valores inteiros: 
Xf, Yf, Xi, Yi, Vi, R1 e R2(0 ≤ Xf, Yf, Xi, Yi, Vi, R1 e R2 ≤ 100), representando respectivamente as coordenadas de Fiddlesticks, 
as coordenadas iniciais do invasor, a velocidade do invasor, o raio de conjuração da ultimate e o raio de voo dos corvos. 
Considere a unidade de medida como sendo o metro.

Saída
Na saída você deve imprimir para cada linha o caractere 'Y' caso seja possível atingir o invasor ou 'N' caso contrário, ambos seguidos de uma quebra de linha.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    int xf, yf, xi, yi, vi, r1, r2;
    double distanciax,distanciay,distancia,raio;

    while(scanf("%d %d %d %d %d %d %d", &xf, &yf, &xi, &yi,&vi,&r1,&r2)!=EOF){

    //distancia entre o invasor e o fiddlesticks
    distanciax = (xi - xf);
    distanciay = (yi - yf);
    distancia = sqrt(pow(distanciax, 2.0) + pow(distanciay, 2.0))+ (vi*1.5);

    raio=r1+r2;


    if(distancia <= raio){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }

    }
    return 0;
}