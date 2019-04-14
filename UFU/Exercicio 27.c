// Leia um valor de area em hectares e apresente-o convertido em metros quadrados
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Quadrado, Hectares;

    // Recebe o numero
    printf("Informe o valor em Hectares: ");
    scanf("%f",&Hectares);

    // Faz a conta
    Quadrado = (Hectares * 10000);

    // Mostra o resultado
    printf("O valor em metros quadrados eh de: %.2f \n", Quadrado);

    // Pausa para mostrar na tela
    system ("pause"); 
}