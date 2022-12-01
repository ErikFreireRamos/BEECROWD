/* Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada,
um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.\
A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que deverão ser considerados
 na operação.*/

 #include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y;
    scanf("%d", &C);
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if(x==C)
            a+=M[x][y];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
