// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Celsius, Kelvin;

    // Recebe o numero
    printf("Informe a temperatura em Kelvin: ");
    scanf("%f",&Kelvin);

    // Faz a conta
    Celsius = Kelvin - 273.15;

    // Mostra o resultado
    printf("A temperatura em Celsius eh: %.2f \n", Celsius);

    // Pausa para mostrar na tela
    system ("pause"); 
}