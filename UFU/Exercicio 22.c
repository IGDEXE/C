// Leia um valor de comprimento em jardas e apresente-o convertido em metros
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Jardas, Metros;

    // Recebe o numero
    printf("Informe o valor em Jardas: ");
    scanf("%f",&Jardas);

    // Faz a conta
    Metros = (Jardas * 0.91);

    // Mostra o resultado
    printf("O valor em Metros eh de: %.2f \n", Metros);

    // Pausa para mostrar na tela
    system ("pause"); 
}