#include <stdio.h>

int main(void) {
    int a = 10;
    float b = 21.5;
    char c = 'a';

    int *p_a; //ponteiro pra inteiro
    float *p_b; //ponteiro pra float
    char *p_c; //ponteiro para char

    p_a = &a; //p_a armazena o endereco de a
    p_b = &b; //p_b armazena o endereco de b
    p_c = &c; //p_c armazena o endereco de c

    printf("Valor de a [1]: %d\n", a);
    printf("Valor de b [1]: %f\n", b);
    printf("Valor de c [1]: %c\n", c);

    *p_a = 20; //acesso o conteudo do endereco aramazenado em p_a
    *p_b = 43.0; //acesso o conteudo do endereco aramazenado em p_b
    *p_c = 'b'; //acesso o conteudo do endereco aramazenado em p_c

    printf("Valor de a [2]: %d\n", a);
    printf("Valor de b [2]: %f\n", b);
    printf("Valor de c [2]: %c\n", c);

    return 0;

}