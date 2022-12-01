/* Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal
 da matriz, conforme ilustrado abaixo (área verde).*/

#include <stdio.h>


int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int x,y,cont;

    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if (y>x)
        {
        a+=M[x][y];
        cont++;
        }
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/cont;
        printf("%.1lf\n",a);
    }


    return 0;
}