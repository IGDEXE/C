// Leia uma distancia em milhas e apresente-a convertida em quilometros
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KM, Milhas;

    // Recebe o numero
    printf("Informe a distancia em milhas: ");
    scanf("%f",&Milhas);

    // Faz a conta
    KM = 1.61 * Milhas;

    // Mostra o resultado
    printf("A distancia em quilometros eh de: %.2f \n", KM);

    // Pausa para mostrar na tela
    system ("pause"); 
}