// Fa�a um programa em Linguagem C que l� um n�mero inteiro, multiplica esse n�mero por 5 e imprime o resultado.
#include <stdio.h>
int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    numero *= 5;
    printf("Multiplicado por cinco fica %d",numero);
}
