// Leia um valor de area em metros quadrados e apresente-o convertido em acres
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Quadrado, Acres;

    // Recebe o numero
    printf("Informe o valor em metros quadrados: ");
    scanf("%f",&Quadrado);

    // Faz a conta
    Acres = (Quadrado * 0.000247);

    // Mostra o resultado
    printf("O valor em Acres eh de: %.2f \n", Acres);

    // Pausa para mostrar na tela
    system ("pause"); 
}