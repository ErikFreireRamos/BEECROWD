/*
Ultimamente, diversas pessoas estão indo à Dra. Cláudia Café com Leite para saber se estão consumindo a quantidade 
recomendada diária de vitamina C. Isso tem a deixado exausta, e por isso ela lhe pediu para escrever um programa que, 
dado o consumo diário de alimentos ricos em vitamina C por uma pessoa, indique o quanto essa pessoa deve consumir a mais ou a 
menos para atingir o recomendado.

Para tal, você poderá utilizar a tabela a seguir:
Alimentos ricos em Vitamina C 	Quantidade de Vitamina C
suco de laranja 	            120 mg
morango fresco 	                85 mg
mamao 	                        85 mg
goiaba vermelha 	            70 mg
manga 	                        56 mg
laranja 	                    50 mg
brocolis 	                    34 mg

Considere que o consumo diário recomendado de vitamina C está entre 110 mg e 130 mg, inclusive.

Entrada
Cada caso de teste é composto um inteiro T (1 ≤ T ≤ 7) indicando que a pessoa consome diariamente T alimentos entre os 
7 alimentos da tabela. Em seguida, haverá T linhas com um inteiro N e um alimento (totalmente em caixa baixa e sem acentuações), 
indicando que a pessoa consome uma quantidade N daquele alimento. A entrada termina com T = 0.

Saída
Para cada caso de teste (T), se o consumo ultrapassou o limite recomendado, imprima "Menos X mg", em que X representa a 
quantidade a menos a ser consumida para atingir o limite recomendado; se o consumo não atingiu o recomendado, 
imprima "Mais X mg", em que X representa a quantidade a mais para atingir o recomendado; se o consumo está dentro do intervalo 
recomendado, imprima "X mg", em que X representa a quantidade consumida diariamente pela pessoa.
*/
#include <stdio.h>
#include <string.h>

int main(void){

    int T,soma,qtd,i;
    char alimento[20];

    while(scanf("%d",&T),T!=0){

        soma=0;
        for(i=0;i<T;i++){
            scanf("%d %[^\n]s",&qtd,alimento);
            if(strcmp(alimento,"suco de laranja")==0){
                soma+=120*qtd;
            }else if(strcmp(alimento,"morango fresco")==0){
                soma+=85*qtd;
            }else if(strcmp(alimento,"mamao")==0){
                soma+=85*qtd;
            }else if(strcmp(alimento,"goiaba vermelha")==0){
                soma+=70*qtd;
            }else if(strcmp(alimento,"manga")==0){
                soma+=56*qtd;
            }else if(strcmp(alimento,"laranja")==0){
                soma+=50*qtd;
            }else if(strcmp(alimento,"brocolis")==0){
                soma+=34*qtd;
            }
        }
        if(soma>110 && soma<130){
            printf("%d mg\n",soma);
        }else if(soma<110){
            printf("Mais %d mg\n",110-soma);
        }else if(soma>130){
            printf("Menos %d mg\n",soma-130);
        }
    }
    return 0;
}