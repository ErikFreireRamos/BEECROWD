/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano.
 Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de 
 duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).
*/
#include <stdio.h>
//QUESTAO ERRADA NO BEECROWD
//para aprovar a questao troca-se  o terceiro quadrante com o quarto
int main(){

    int x,y;

    while(1){
        scanf("%d %d",&x,&y);
        if (x==0||y==0)
        {
            break;
        }
        else if(x>0&&y>0){
            printf("primeiro\n");
        }
        else if( x<0&& y>0){
            printf("segundo\n");
        }
        else if(x>0 && y<0){
            printf("terceiro\n");
        }
        else if(x<0&& y<0){
            printf("quarto\n");
        }

    }

    return 0;
}
