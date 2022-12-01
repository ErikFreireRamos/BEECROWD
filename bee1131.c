/*
A Federação Gaúcha Futebol você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS.
Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. 
Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida,
caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).
*/
#include <stdio.h>
int main(){

      int inter_gol=0,gremio_gol=0,grenal_novo=0,vit_i=0,vit_g=0,emp=0,grenal_tot=0;

      while(1)
      {
          scanf("%d %d",&inter_gol,&gremio_gol);
          if (inter_gol>gremio_gol)
          {
            vit_i++;
          }
          else if (gremio_gol>inter_gol)
          {
              vit_g++;
          }
          else{ emp++;}
          grenal_tot++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&grenal_novo);
        if (grenal_novo==2)
        {
            break;
        }        
      }

      printf("%d grenais\n",grenal_tot);
      printf("Inter:%d\n",vit_i);
      printf("Gremio:%d\n",vit_g);      
      printf("Empates:%d\n",emp);
      if (vit_i>vit_g)
      {
        printf("Inter venceu mais\n");
      }
      else if (vit_g>vit_g)     
       {
           printf("Gremio venceu mais\n");
      }
      else {
          printf("Nao houve vencedor\n");
      }
      return 0;
}