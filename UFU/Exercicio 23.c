// Leia um valor de comprimento em metros e apresente-o convertido em jardas
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Jardas, Metros;

    // Recebe o numero
    printf("Informe o valor em Metros: ");
    scanf("%f",&Metros);

    // Faz a conta
    Jardas = (Metros / 0.91);

    // Mostra o resultado
    printf("O valor em Jardas eh de: %.2f \n", Jardas);

    // Pausa para mostrar na tela
    system ("pause"); 
}