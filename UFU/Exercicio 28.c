// Fac¸a a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores lidos
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float numero1, numero2, numero3, resultado;

    // Recebe os numeros
    printf("Informe o primeiro valor: ");
    scanf("%f",&numero1);
    printf("Informe o segundo valor: ");
    scanf("%f",&numero2);
    printf("Informe o terceiro valor: ");
    scanf("%f",&numero3);

    // Faz a conta
    resultado = ((numero1 * numero1) + (numero2 * numero2) + (numero3 * numero3));

    // Mostra o resultado
    printf("O resultado da soma de seus quadrados eh de: %.2f \n", resultado);

    // Pausa para mostrar na tela
    system ("pause"); 
}