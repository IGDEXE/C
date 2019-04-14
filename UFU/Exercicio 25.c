// Leia um valor de area em acres e apresente-o convertido em metros quadrados
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Quadrado, Acres;

    // Recebe o numero
    printf("Informe o valor em Acres: ");
    scanf("%f",&Acres);

    // Faz a conta
    Quadrado = (Acres * 4048.58);

    // Mostra o resultado
    printf("O valor em metros quadrados eh de: %.2f \n", Acres);

    // Pausa para mostrar na tela
    system ("pause"); 
}