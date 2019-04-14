// Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Polegadas, Centimetros;

    // Recebe o numero
    printf("Informe o valor em centimetros: ");
    scanf("%f",&Centimetros);

    // Faz a conta
    Polegadas = (Centimetros/2.54);

    // Mostra o resultado
    printf("O valor em polegadas eh de: %.2f \n", Polegadas);

    // Pausa para mostrar na tela
    system ("pause"); 
}