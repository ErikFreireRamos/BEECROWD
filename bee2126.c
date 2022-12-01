/*
Dados dois números naturais N1 e N2, diz-se que N1 é subsequência contígua de N2 se todos os dígitos de N1 aparecem, 
na mesma ordem e de forma contígua, em N2. Crie uma aplicação que leia dois números naturais e diga se o primeiro é uma 
subsequência contígua do segundo.

Entrada
A entrada é composta por vários casos de teste e termina com final de arquivo (EOF). A primeira linha de cada entrada é composta 
por um valor natural N1(1 < N1 < 1010), a segunda linha é composta por um valor N2( N1 < N2 < 1032).

Saída
Para cada caso de teste imprima a quantidade de subsequências contíguas e a posição onde a subsequência é iniciada, 
caso exista mais de uma subsequência, imprima onde é iniciada a úl*/
#include <stdio.h>

int main(void){

   char n1[1010],n2[1032],i,qtd_sub=0;

   scanf("%s %s",&n1,&n2);


   for (i = 0; i < strlen(n2); i+=strlen(n1))
   {
       
   }
   


    return 0;
}