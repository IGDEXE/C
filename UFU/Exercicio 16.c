// Leia um valor de comprimento em polegadas e apresente-o convertido em centimetros
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Polegadas, Centimetros;

    // Recebe o numero
    printf("Informe o valor em polegadas: ");
    scanf("%f",&Polegadas);

    // Faz a conta
    Centimetros = (Polegadas * 2.54);

    // Mostra o resultado
    printf("O valor em centimetros eh de: %.2f \n", Centimetros);

    // Pausa para mostrar na tela
    system ("pause"); 
}