/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.
*/
#include <stdio.h>

int main(void){

    int num,i,cont_par,cont_impar,cont_pos,cont_neg;

    cont_par=0,cont_impar=0,cont_pos=0,cont_neg=0;

    for (i = 1; i <=5 ; i++)
    {
        scanf("%d",&num);
        if (num%2==0)
        {
            cont_par++;
        }
        if(num%2!=0){
            cont_impar++;
        }
        /*else{
            cont_impar++;
        }*/
        if(num>0){
            cont_pos++;
        }
        if(num<0){
            cont_neg++;
        }

        /*else{
            cont_neg++;
        }
        */
    }
    printf("%d valor(es) par(es)\n",cont_par);
    printf("%d valor(es) impar(es)\n",cont_impar);
    printf("%d valor(es) positivo(s)\n",cont_pos);
    printf("%d valor(es) negativo(s)\n",cont_neg);



    

    return 0;
}