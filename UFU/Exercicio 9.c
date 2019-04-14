// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Celsius, Kelvin;

    // Recebe o numero
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&Celsius);

    // Faz a conta
    Kelvin = Celsius + 273.15;

    // Mostra o resultado
    printf("A temperatura em Kelvin eh: %.2f \n", Kelvin);

    // Pausa para mostrar na tela
    system ("pause"); 
}