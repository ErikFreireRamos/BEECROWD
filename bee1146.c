/*Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero).
 Para cada valor lido imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.

Obs: cuide para não deixar espaço em branco após o último valor apresentado na linha ou você receberá Presentation Error.*/

#include <stdio.h>

int main(){

    int n=1,i;
    while(n!=0)
    {
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {   
        if(i!=n){
        printf("%d ",i);
        }
        else{
            printf("%d\n",i);
        }
    }
    
    }

    return 0;
}
