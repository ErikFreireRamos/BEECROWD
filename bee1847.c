/*O inverno é uma estação maravilhosa, não é mesmo? Todos nós amamos vestir um poncho, participar de uma roda de chimarrão, assar pinhões no fogão a lenha… Mas nem todos gostam do inverno, especialmente em lugares onde o inverno costuma ser muito cruel. Em Westeros, por exemplo, o humor das pessoas é definido de acordo com as tendências climáticas. Com base nas temperaturas dos três últimos dias, as pessoas podem ficar tristes ou felizes, ficando mais propensas a fazer guerra ou fazer amor, respectivamente. E, sejamos sinceros, é justamente por causa das cenas de amor e de guerra que amamos Game of Thrones!

    Se a temperatura desceu do 1º para o 2º dia, mas subiu ou permaneceu constante do 2º para o 3º, as pessoas ficam felizes (primeira figura).
    Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu constante do 2º para o 3º, as pessoas ficam tristes (segunda figura).
    Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficamtristes (terceira figura).
    Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º, as pessoas ficam felizes (quarta figura).
    Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º menos do que descera do 1º para o 2º, as pessoas ficam felizes (quinta figura).
    Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes (sexta figura).
    Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes se subiu do 2º para o 3º dia ou tristes caso contrário (respectivamente, sétima e oitava figuras).
*/
#include <stdio.h>

int main(void){

    int d1,d2,d3;
    
    scanf("%d %d %d",&d1,&d2,&d3);
    
    if (d1==d2)
    {
        if (d2<d3)
        {
            printf(":)\n");
        }
        else if (d2>d3)
        {
            printf(":(");
        }
        
        
    }
    else if (d1>d2)
    {
        if (d2<=d3)
        {
            printf(":)\n");
        }
        else if (d2>d3)
        {
            if (d3-d2>d2-d1)        
            {
                printf(":)\n");
            }
            else if (d3-d2<=d2-d1)
            {
                printf(":(\n");
            }
        }
        
        
    }
    else if (d1<d2)
    {
        if (d2>d3)
        {
            printf(":(\n");
        }
        else if (d3-d2>=d2-d1)
        {
            printf(":)\n");
        }
        else if (d3-d2<d2-d1)
        {
            printf(":(\n");
        }
        
    }
    
    return 0;
}