// Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s (metros por segundo)
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KM, Metros;

    // Recebe o numero
    printf("Informe a velocidade em KM/Hora: ");
    scanf("%f",&KM);

    // Faz a conta
    Metros = (KM/3.6);

    // Mostra o resultado
    printf("A velocidade em metros por segundo eh: %.2f \n", Metros);

    // Pausa para mostrar na tela
    system ("pause"); 
}