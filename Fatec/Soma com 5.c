// Fa�a um programa em Linguagem C que l� um n�mero inteiro e imprime este valor adicionado de 5.
#include <stdio.h>

int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero += 5;
    printf("Somando cinco fica %d",numero);
}
