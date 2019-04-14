// Leia um valor de massa em libras e apresente-o convertido em quilogramas
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KG, Libras;

    // Recebe o numero
    printf("Informe o valor em Libras: ");
    scanf("%f",&Libras);

    // Faz a conta
    KG = (Libras * 0.45);

    // Mostra o resultado
    printf("O valor em KG eh de: %.2f \n", KG);

    // Pausa para mostrar na tela
    system ("pause"); 
}