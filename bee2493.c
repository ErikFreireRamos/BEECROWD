/*
Samu Elmito adora criar jogos peculiares para desafiar seus amigos. Desta vez, ele inventou um jogo chamado "Jogo do Operador", em que ele cria expressões básicas e 
cada jogador deve escolher uma expressão e preencher a lacuna com o operador correto para validá-la. Os jogadores poderão escolher operadores de somente três tipos: 
adição, subtração e multiplicação. Porém, se o jogador achar que não há operador entre os três tipos que valide a expressão, poderá responder Impossível.

Sua tarefa é simples: dadas as expressões e as respostas dos jogadores, determinar os jogadores que não passarão para a outra fase do jogo.

Entrada
A entrada é composta por um inteiro T (2 ≤ T ≤ 50) que indica a quantidade de expressões e de jogadores. Cada caso de teste é composto por T expressões na forma 
"X Y=Z", indicando que X operador Y (0 ≤ X, Y ≤ 103) é igual a Z (-103 ≤ Z ≤ 106), seguido de T jogadores e suas respectivas respostas na forma "N E R", sendo N o 
nome do jogador (até 50 caracteres e sem espaços), E o índice da expressão escolhida (1 ≤ E ≤ T) e R a resposta (+, -, * ou I, indicando Impossível). 
A entrada termina com EOF (fim de arquivo).

Saída
Para cada caso de teste, se todos os jogadores passarem, imprima "You Shall All Pass!"; se nenhum jogador passar, imprima "None Shall Pass!"; 
caso contrário, imprima, em ordem lexicográfica e entre espaços, o nome dos jogadores que erraram a resposta e, desta forma, não passarão para a próxima fase do jogo.
*/
#include <stdio.h>

int main(void){

    typedef struct 
    {  
        int x,y,z;
    }operacao;
    
    typedef struct 
    {
        char jogador[50],resposta;
        int linha,passou;
    }usuario;
    

    int qtd,i,cont=0;

    while(scanf("%d",&qtd)!=EOF){

    usuario usuarios[qtd];
    operacao operacoes[qtd];

        //Preenchendo o vetor de expressões

        for (i = 0; i < qtd; i++)
        {
            scanf("%d %d %d",&operacoes[i].x,&operacoes[i].y,&operacoes[i].z);
        }

        //Armazenando respostas
        for (i = 0; i < qtd; i++)
        {
            scanf("%s %d %c",usuarios[i].jogador,&usuarios[i].linha,&usuarios[i].resposta);
        }
        //Verificando  respostas
        for (i = 0; i < qtd; i++)
        {
            if (usuarios[i].resposta=='+')
            {
                if (operacoes[i].x+operacoes[i].y==operacoes[i].z)
                {
                    usuarios[i].passou=1;
                    cont++;
                }
                else usuarios[i].passou=0;
            }
            else if (usuarios[i].resposta=='-')
            {
                if (operacoes[i].x-operacoes[i].y==operacoes[i].z)
                {
                    usuarios[i].passou=1;
                    cont++;
                }
                else usuarios[i].passou=0;
            }
            else if (usuarios[i].resposta=='*')
            {
                if (operacoes[i].x*operacoes[i].y==operacoes[i].z)
                {
                    usuarios[i].passou=1;
                    cont++;
                }
                else  usuarios[i].passou=0;
            }
            else if (usuarios[i].resposta=='I')
            {
                if (operacoes[i].x*operacoes[i].y!=operacoes[i].z & operacoes[i].x*operacoes[i].y!=operacoes[i].z && operacoes[i].x*operacoes[i].y!=operacoes[i].z)
                {
                 usuarios[i].passou=1;   
                 cont++;
                }
                else usuarios[i].passou=0;
                
            }
        }
        //exibindo os resultados
        if (cont==qtd)
        {
            printf("You Shall All Pass!\n");
        }
        else if (cont==0)
        {
            printf("None Shall Pass!\n");
        }
        else
        for (i = 0; i < qtd; i++)
        {
            if (usuarios[i].passou==1)
            {
                printf
            }
            
        }
        
        
        
    //+-* ou  I
    }



    return 0;
}