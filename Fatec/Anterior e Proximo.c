// Faça um programa em Linguagem C que lê um número inteiro e imprime o anterior e o consecutivo.
#include <stdio.h>
int main()
{
    int numero, next, past;
    printf("Informe um numero: ");
    scanf("%d",&numero);

    past = numero - 1;
    next = numero + 1;
    printf("O anterior eh %d e o proximo eh %d",past,next);
}
