/*Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, 
o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), 
indicando o número de casos de teste da entrada.
 Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.*/
#include <stdio.h>

int main(){
    
    int n,x,i,j,divisor=0;

    scanf("%d",&n);

    for (i = 1; i <=n; i++)
    {
    scanf("%d",&x);

    for (j = 1; j <= x; j++)
        {
            if (x%j==0)
            {
                divisor++;
            }
            if (divisor>2)
            {
                break;
            }
            
        }
        if(divisor==2){
        printf("%d eh primo\n",x);
        }
        else {
        printf("%d nao eh primo\n",x);
        }
        divisor=0;
        x=0;
    }
    


    return 0;
}