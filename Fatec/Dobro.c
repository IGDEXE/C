// Faça um programa em Linguagem C que lê um número inteiro, e imprime o seu dobro.
#include <stdio.h>
int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero *= 2;
    printf("O dobro eh %d",numero);
}
