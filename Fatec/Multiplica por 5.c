// Faça um programa em Linguagem C que lê um número inteiro, multiplica esse número por 5 e imprime o resultado.
#include <stdio.h>
int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero *= 5;
    printf("Multiplicado por cinco fica %d",numero);
}
