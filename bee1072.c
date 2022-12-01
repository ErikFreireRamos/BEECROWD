/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, 
mostrando essas informações.*/
#include <stdio.h>

int main(void){

    int N,i,num,in,out;
    in=0;
    scanf("%d",&N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d",&num);
        if (num>=10 && num<=20)
        {
            in++;
        }
        else{ out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);



    return 0;
}