// Fa�a um programa em Linguagem C que l� um n�mero inteiro, soma esse n�mero com o valor 10 e imprime o resultado
#include <stdio.h>
int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero += 10;
    printf("Somando dez fica %d",numero);
}
