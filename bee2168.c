/*
No crepúsculo, a cidade de Portland fica cheia de vampiros e lobisomens. Entretanto, nenhum deles quer ser visto enquanto 
passeiam pelo centro.

Vão ser instaladas câmeras de vigilância em cada esquina do centro de Portland. A cada mês, um mapa atualizado com as câmeras 
já em funcionamento é disponibilizado no site da prefeitura.

Uma quadra é considerada segura se existem câmeras em, pelo menos, duas de suas quatro esquinas. No centro de Portland todas 
as quadras são quadrados de mesmo tamanho.

Sua tarefa é, dado o mapa das câmeras em funcionamento nas esquinas, indicar o status de todas as quadras do centro.

Entrada
A primeira linha da entrada tem um inteiro positivo N (1 ≤ N ≤ 100). Nas próximas N+1 linhas, existem N+1 números, que indicam, 
para cada esquina, a presença ou ausência de uma câmera de vigilância em funcionamento. O número 1 indica que existe uma câmera 
funcionando na esquina, enquanto o número zero indica que não há câmera funcionando.

Saída
A saída é dada em N linhas. Cada linha tem N caracteres, indicando se a quadra correspondente é segura ou insegura. 
Se uma quadra é segura, mostre o caractere S; se não é segura, mostre o caractere U.

ex:Entrada 3
1 1 0 1
1 0 1 0
1 0 0 1
0 1 1 0
Saida:
SSS
SUS
SSS
*/
#include <stdio.h>

int main(void){

    int tamanho,i,j;

    scanf("%d", &tamanho);

    int tamanhomax = tamanho + 1;
    int matriz[tamanhomax][tamanhomax];

    for(i = 0; i < tamanhomax; i++){
        for(j = 0; j < tamanhomax; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
        
            if (matriz[i][j]+matriz[i][j+1]+matriz[i+1][j]+matriz[i+1][j+1] >= 2){
                printf("S");
            }
            else{
                printf("U");
            }
    }
    printf("\n");
    }

    return 0;
}