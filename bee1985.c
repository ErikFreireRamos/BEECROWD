/*
O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. 
Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. 
O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, 
eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. Segue o cardápio do dia 
contendo o número do produto e seu respectivo valor.

1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50

Entrada
A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). 
Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.

Obs.: não poderão ser informados números de produtos repetidos.

Saída
Você deve imprimir o valor da compra com duas casas decimais.*/
#include <stdio.h>

int main(void){

    int qtd_tipo_produto,produto,qtd_produto,i;
    float p1001=1.50,p1002=2.50,p1003=3.50,p1004=4.50,p1005=5.50,saldo;

    scanf("%d",&qtd_tipo_produto);

    for (i = 0; i < qtd_tipo_produto; i++)
    {
        scanf("%d",&produto);
        switch (produto)
       {
        case    1001:
            scanf("%d",&qtd_produto);
            
            saldo+=qtd_produto*p1001;

            break;
        case    1002:
            scanf("%d",&qtd_produto);
            
            saldo+=qtd_produto*p1002;

            break;
        case    1003:
            scanf("%d",&qtd_produto);
            
            saldo+=qtd_produto*p1003;

            break;
        case    1004:
            scanf("%d",&qtd_produto);
            
            saldo+=qtd_produto*p1004;

            break;
        case    1005:
            scanf("%d",&qtd_produto);
            
            saldo+=qtd_produto*p1005;

            break;        
        
        default:
            break;
        }
    }
    printf("%.2f\n",saldo);


    return 0;
}