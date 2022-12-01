/* Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área superior da matriz, conforme ilustrado abaixo (área verde).
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área superior da matriz, conforme ilustrado abaixo (área verde).*/
#include  <stdio.h>

int main(){

    double M[12][12],tot=0.0;
    int x,y,a,b;
    int bmin=1,bmax=10;
    char T[2] ;

    scanf("%s",&T);

    for (x = 0; x <= 11; x++)
    {
        for (y = 0; y <= 11; y++)
        
            scanf("%lf",&M[x][y]);
        
    }
    for(a=0; a<=4 ;a++){
        for ( b = bmin ; b <= bmax; b++)
        {
            tot+=M[a][b];
            
            bmax--;
            bmin++;
        }
        
    }
    if (T[0]=='S')
    {
        printf("%.1lf\n",tot);
    }
    else if (T[0]=='M')
    {
        printf("%.1lf\n",tot/30.0);
    }
    


    return 0;
}