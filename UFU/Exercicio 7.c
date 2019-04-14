// Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Celsius, Fahrenheit;

    // Recebe o numero
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    // Faz a conta
    Celsius = ((5 * (Fahrenheit - 32))/9);

    // Mostra o resultado
    printf("A temperatura em Celsius eh: %.2f \n", Celsius);

    // Pausa para mostrar na tela
    system ("pause"); 
}