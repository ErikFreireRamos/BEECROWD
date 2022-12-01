/*
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4)
 deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4.
*/
#include <stdio.h>
int main(void){
int opcao,alcool=0,gasolina=0,diesel=0;

while (opcao!=4)
{
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
    alcool++;
    break;
    case 2:
    gasolina++;
    break;
    case 3:
    diesel++;
    default:
        break;
    }
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",alcool);
printf("Gasolina: %d\n",gasolina);
printf("Diesel: %d\n",diesel);

return 0;
}