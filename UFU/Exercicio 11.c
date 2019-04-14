// Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilometros por hora)
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KM, Metros;

    // Recebe o numero
    printf("Informe a velocidade em metros por segundo: ");
    scanf("%f",&Metros);

    // Faz a conta
    KM = (Metros * 3.6);

    // Mostra o resultado
    printf("A velocidade em KM/Horas eh: %.2f \n", KM);

    // Pausa para mostrar na tela
    system ("pause"); 
}