/*
Faça um programa que leia 5 valores inteiros. 
Conte quantos destes valores digitados são pares e mostre esta informação.
*/
#include <stdio.h>

int main(void){

    int i,num,cont_par;
    cont_par=0;

    for (i = 1; i <=5; i++)
    {
        scanf("%d",&num);
        if(num%2==0){
            cont_par++;
        }
    }
    printf("%d valores pares\n",cont_par);



    return 0;
}
