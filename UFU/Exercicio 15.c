// Leia um angulo em radianos e apresente-o convertido em graus
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Graus, Radianos, Pi;

    // Recebe o numero
    printf("Informe o angulo em Radianos: ");
    scanf("%f",&Radianos);

    // Faz a conta
    Pi = 3.14; // Define Pi
    Graus = ((Radianos * 180)/Pi);

    // Mostra o resultado
    printf("Em Graus, o angulo vale: %.2f \n", Graus);

    // Pausa para mostrar na tela
    system ("pause"); 
}