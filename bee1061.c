/*
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril,
iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, 
uma vez que ele sabe quando inicia e quando termina o evento.

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar.
Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. 
Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, 
indicando o término do evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.
*/
#include <stdio.h>

int main(){

    int dia_i,hora_i,min_i,seg_i,dia_f,hora_f,min_f,seg_f,seg,min,hora,dia;
    
    scanf("Dia %d",&dia_i);
    scanf("%d : %d : %d\n",&hora_i,&min_i,&seg_i);
    scanf("Dia %d",&dia_f);
    scanf("%d : %d : %d",&hora_f,&min_f,&seg_f);


    seg=seg_f-seg_i;
    min=min_f-min_i;
    hora=hora_f-hora_i;
    dia=dia_f-dia_i;

    if(seg<0){

        seg+=60;
        min--;
    }
    if(min<0){

        min+=60;
        hora--;
    }
    if(hora<0){

        hora+=24;
        dia--;
    }
    printf("%d dia(s)\n",dia);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",seg);

    return 0;
}