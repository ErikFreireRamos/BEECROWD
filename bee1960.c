/*
A ECI (Editio Chronica Incredibilis ou Editora de Crônicas Incríveis) é muito tradicional quando se trata de numerar as páginas 
de seus livros. Ela sempre usa a numeração romana para isso. E seus livros nunca ultrapassam as 999 páginas pois, quando 
necessário, dividem o livro em volumes.

Você deve escrever um programa que, dado um número arábico, mostra seu equivalente na numeração romana.
Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.

Entrada
A entrada é um número inteiro positivo N (0 < N < 1000).

Saída
A saída é o número N escrito na numeração romana em uma única linha. Use sempre letras maiúsculas.
*/
#include <stdio.h>

int main(void){
    //faca programa que converta numero decimal para romano
    
    int numero;

    scanf("%d", &numero);
   // Lembre que I representa 1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
    //I,II,III,IV,V,VI,VII,VIII,

    while(numero>0){
        if(numero>=1000){
            printf("M");
            numero-=1000;
        }
        else if(numero>=900){
            printf("CM");
            numero-=900;
        }
        else if(numero>=500){
            printf("D");
            numero-=500;
        }
        else if(numero>=400){
            printf("CD");
            numero-=400;
        }
        else if(numero>=100){
            printf("C");
            numero-=100;
        }
        else if(numero>=90){
            printf("XC");
            numero-=90;
        }
        else if(numero>=50){
            printf("L");
            numero-=50;
        }
        else if(numero>=40){
            printf("XL");
            numero-=40;
        }
        else if(numero>=10){
            printf("X");
            numero-=10;
        }
        else if(numero>=9){
            printf("IX");
            numero-=9;
        }
        else if(numero>=5){
            printf("V");
            numero-=5;
        }
        else if(numero>=4){
            printf("IV");
            numero-=4;
        }
        else if(numero>=1){
            printf("I");
            numero-=1;
        }
    }
    printf("\n");


    return 0;
}