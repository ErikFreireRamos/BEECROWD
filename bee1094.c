/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua 
ajuda para organizar os experimentos de um laboratório o qual ela é responsável.
 Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.
Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, 
ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas
 em cada experimento.
*/
#include <stdio.h>

int main(void){

    int i,num,num1,coelho,rato,sapo,tot_ani;
    float coelho_cent,rato_cent,sapo_cent;
    char opcao;
  
    coelho=0,rato=0,sapo=0,tot_ani=0;

    scanf("%d",&num);

    for (i = 1; i <= num; i++)
    {
        scanf("%d %c",&num1,&opcao);

        switch (opcao)
        {
        case 'C':
            coelho+=num1;
            tot_ani+=num1;    
            break;

        case 'R':
            rato+=num1;
            tot_ani+=num1;    
            break;
        case 'S':
            sapo+=num1;
            tot_ani+=num1;    
            break;

        }    
    }
    coelho_cent=(coelho/(float)tot_ani)*100;
    rato_cent=(rato/(float)tot_ani)*100;
    sapo_cent=(sapo/(float)tot_ani)*100;

    printf("Total: %d cobaias\n",tot_ani);
    printf("Total de coelhos: %d\n",coelho);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);    
    printf("Percentual de coelhos: %.2f %%\n",coelho_cent);
    printf("Percentual de ratos: %.2f %%\n",rato_cent);
    printf("Percentual de sapos: %.2f %%\n",sapo_cent);


    return 0;
}