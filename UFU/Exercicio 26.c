// Leia um valor de area em metros quadrados e apresente-o convertido em hectares
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Quadrado, Hectares;

    // Recebe o numero
    printf("Informe o valor em metros quadrados: ");
    scanf("%f",&Quadrado);

    // Faz a conta
    Hectares = (Quadrado * 0.0001);

    // Mostra o resultado
    printf("O valor em Hectares eh de: %.2f \n", Hectares);

    // Pausa para mostrar na tela
    system ("pause"); 
}