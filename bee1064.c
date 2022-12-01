/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
*/
#include <stdio.h>
int main(void){

    float num,num_tot,med;
    int cont,i;

    for(i=1;i<=6;i++){
    scanf("%f",&num);
    if (num>0)
    {
        cont++;
        num_tot+=num;
    }
    }
    med=num_tot/cont;
    printf("%d valores positivos\n",cont);
    printf("%.1f\n",med);
    
    return 0 ;
}
