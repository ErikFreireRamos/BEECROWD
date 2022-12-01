/* Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
 Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área direita da matriz, 
 conforme ilustrado abaixo (área verde).*/
#include <stdio.h>

int main(){

    int x,y,x1,y1;
    int contx=11,conty=7;
    char T[2];
    double M[12][12],s=0.0;

    scanf("%s",&T);
    for ( x =0; x <= 11; x++)
    {
        for (y = 0; y <= 11; y++)
        {
            scanf("%lf",&M[x][y]);
        }
        
    }
    for (x1 = 1; x1 <= 10; x1++)
    {
            if (x1<=5)
            {
                for (y1 = contx;y1<=11; y1++)
                {  
                    s+=M[x1][y1];
                
                }
                contx--;
            }
            else if (x1>=6)
            {
                for (y1 = conty;y1<=11; y1++)
                { 
                    
                    s+=M[x1][y1];
                
                }
                conty++;
            }
               
    }
    if(T[0]=='S')
        printf("%.1lf\n",s);
    else if(T[0]=='M')
    {
        s=s/30.0;
        printf("%.1lf\n",s);
    }
    
    
    

    return 0;
}