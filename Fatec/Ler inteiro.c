// Faça um programa em Linguagem C que lê um número inteiro e imprime este valor adicionado de 1
#include <stdio.h>

int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero += 1;
    printf("Somando um fica %d",numero);
}
