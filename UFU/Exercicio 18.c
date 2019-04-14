// Leia um valor de volume em metros cubicos e apresente-o convertido em litros
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Metros, Litros;

    // Recebe o numero
    printf("Informe o valor em metros cubicos: ");
    scanf("%f",&Metros);

    // Faz a conta
    Litros = (Metros * 1000);

    // Mostra o resultado
    printf("O valor em Litros eh de: %.2f \n", Litros);

    // Pausa para mostrar na tela
    system ("pause"); 
}