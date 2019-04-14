// Leia uma distancia em quilometros e apresente-a convertida em milhas
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KM, Milhas;

    // Recebe o numero
    printf("Informe a distancia em KM: ");
    scanf("%f",&KM);

    // Faz a conta
    Milhas = (KM/1.61);

    // Mostra o resultado
    printf("A distancia em milhas eh de: %.2f \n", Milhas);

    // Pausa para mostrar na tela
    system ("pause"); 
}