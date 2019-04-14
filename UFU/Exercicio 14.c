// Leia um angulo em graus e apresente-o convertido em radianos
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Graus, Radianos, Pi;

    // Recebe o numero
    printf("Informe o angulo em graus: ");
    scanf("%f",&Graus);

    // Faz a conta
    Pi = 3.14; // Define Pi
    Radianos = ((Graus * Pi)/180);

    // Mostra o resultado
    printf("Em Radianos, o angulo vale: %.2f \n", Radianos);

    // Pausa para mostrar na tela
    system ("pause"); 
}