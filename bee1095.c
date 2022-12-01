/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0
*/
#include <stdio.h>

int main(void){

    int i,j;
    i=1;

    for (i=1,j = 60; j >= 0; j-=5,i+=3)
    {

        printf("I=%d J=%d\n",i,j);
    }
    


    return 0;
}