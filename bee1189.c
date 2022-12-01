/* Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área esquerda da matriz, 
conforme ilustrado abaixo (área verde).*/
#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,cont=0;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=1;z<=10;z++)                   //Mi==z[1][0] Mf==c[10][0],[1][0],[2][0],[2][1],[3][0],[3][1],[3][2] ate [5][4]
                             //[6][4],[6][3],[6][2],[6][1],[6][0],[7][0],[7][1],[7][2],[7][3] || [8][0],[8][1],[8][2]
        {
        if(z<=5){ 

        for(C=0; C<z;C++)                
        {a+=M[z][C];
        }
        }
        else if (z>=6)
        {
        for(C=0; C<(11-z);C++)                
        {a+=M[z][C];
        }
        }
        
        
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}