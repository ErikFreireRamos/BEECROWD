/*
Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10
 e o valor armazenado em cada uma das posições.
*/
int main(){

float a[100];
int i;

for (i = 0; i < 100; i++)
{
    scanf("%f",&a[i]);
}
for (i = 0; i < 100; i++)
{
    if (a[i]<=10)
    {
        printf("A[%d] = %.1f\n",i,a[i]);
    }
    
}


return 0;
}
