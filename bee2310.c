/*
Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de 
saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso 
(resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

Entrada
A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores. 
Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A (0 ≤ S,B,A ≤ 10000) 
representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, 
S1, B1 e A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Saída
A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, 
conforme mostrado no exemplo.
*/
#include <stdio.h>

int main() {

    struct jogador {
        char nome[100];
        int saques, bloqueios, ataques;
        int saques_sucesso, bloqueios_sucesso, ataques_sucesso;
    };

    int n,i;

    scanf("%d", &n);

    struct jogador jogadores[n];

    for(i=0; i<n; i++){
        scanf("%s", jogadores[i].nome);
        scanf("%d %d %d", &jogadores[i].saques, &jogadores[i].bloqueios, &jogadores[i].ataques);
        scanf("%d %d %d", &jogadores[i].saques_sucesso, &jogadores[i].bloqueios_sucesso, &jogadores[i].ataques_sucesso);
    }

    float total_saques = 0, total_bloqueios = 0, total_ataques = 0;
    float total_saques_sucesso = 0, total_bloqueios_sucesso = 0, total_ataques_sucesso = 0;

    for(i=0; i<n; i++){
        total_saques += jogadores[i].saques;
        total_bloqueios += jogadores[i].bloqueios;
        total_ataques += jogadores[i].ataques;
        total_saques_sucesso += jogadores[i].saques_sucesso;
        total_bloqueios_sucesso += jogadores[i].bloqueios_sucesso;
        total_ataques_sucesso += jogadores[i].ataques_sucesso;
    }

    float percentual_saques = (total_saques_sucesso / total_saques) * 100;
    float percentual_bloqueios = (total_bloqueios_sucesso / total_bloqueios) * 100;
    float percentual_ataques = (total_ataques_sucesso / total_ataques) * 100;

    printf("Pontos de Saque: %.2f%%.\n", percentual_saques);
    printf("Pontos de Bloqueio: %.2f%%.\n", percentual_bloqueios);
    printf("Pontos de Ataque: %.2f%%.\n", percentual_ataques);

    return 0;
}
