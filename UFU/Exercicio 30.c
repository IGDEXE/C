// Leia um valor em real e a cotacao do dolar. Em seguida, imprima o valor correspondente em dolares
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float Breal, Dolar, cotacao;

    // Recebe os numeros
    printf("Informe o valor em reais: ");
    scanf("%f",&Breal);
    printf("Informe a cotacao do Dolar: ");
    scanf("%f",&cotacao);

    // Faz a conta
    Dolar = (Breal * cotacao);

    // Mostra o resultado
    printf("O valor em dolares eh de: %.2f \n", Dolar);

    // Pausa para mostrar na tela
    system ("pause"); 
}