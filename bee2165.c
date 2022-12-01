/*
O microblog Twitter é conhecido por limitar as postagens em 140 caracteres. C
onferir se um texto vai caber em um tuíte é sua tarefa.

Entrada
A entrada é uma linha de texto T (1 ≤ |T| ≤ 500).

Saída
A saída é dada em uma única linha. 
Ela deve ser "TWEET" (sem as aspas) se a linha de texto T tem até 140 caracteres. Se T tem mais de 140 caracteres, 
a saída deve ser "MUTE".
*/
#include <stdio.h>
#include <string.h>

int main(void){

    char tweet[501];

    scanf("%[^\n]", tweet);
    
    if(strlen(tweet) <= 140){
        printf("TWEET\n");
    }
    else{
        printf("MUTE\n");
    }


    return 0;
}