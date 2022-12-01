/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
 um valor por linha, inclusive o X ser for o caso.
*/
#include <stdio.h>

int main (void){

    int num,i;

    scanf("%d",&num);
    if(num%2==0){
        num++;
    }
    printf("%d\n",num);

    for (i = 1; i <= 5; i++)
    {
     printf("%d\n",num+=2);
    }
    

    return 0 ;
}