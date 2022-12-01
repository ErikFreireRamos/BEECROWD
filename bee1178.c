/*Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99), 
coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.
 	
N[0] = 200.0000
N[1] = 100.0000
N[2] = 50.0000
N[3] = 25.0000
N[4] = 12.5000
...
*/
#include <stdio.h>
int main(){
int i;
double n,y[100];

scanf("%lf",&n);

for (i = 0; i < 100 ; i++)
{
    y[i]=n;
    n=n/2;
    printf("N[%d] = %.4lf\n",i,y[i]);
}

return 0;
}