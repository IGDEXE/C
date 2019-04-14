// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Celsius, Fahrenheit;

    // Recebe o numero
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&Celsius);

    // Faz a conta
    Fahrenheit = (Celsius*(9/5)+32);

    // Mostra o resultado
    printf("A temperatura em Fahrenheit eh: %.2f \n", Fahrenheit);

    // Pausa para mostrar na tela
    system ("pause"); 
}