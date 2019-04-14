// 2) Faça um programa que leia um numero real e o imprima
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float numero;

    // Recebe o numero
    printf("Informe um numero real: ");
    scanf("%f",&numero);

    // Escreve na tela
    printf("O numero informado foi: %f \n", numero);
    
    // Pausa para mostrar na tela
    system ("pause");  
}