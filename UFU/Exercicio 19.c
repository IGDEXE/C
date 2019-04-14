// Leia um valor de volume em litros e apresente-o convertido em metros cubicos
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Metros, Litros;

    // Recebe o numero
    printf("Informe o valor em Litros: ");
    scanf("%f",&Litros);

    // Faz a conta
    Metros = (Litros/1000);

    // Mostra o resultado
    printf("O valor em metros cubicos eh de: %.2f \n", Metros);

    // Pausa para mostrar na tela
    system ("pause"); 
}