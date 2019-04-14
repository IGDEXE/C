// Leia um valor de massa em quilogramas e apresente-o convertido em libras
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float KG, Libras;

    // Recebe o numero
    printf("Informe o valor em KG: ");
    scanf("%f",&KG);

    // Faz a conta
    Libras = (KG/0.45);

    // Mostra o resultado
    printf("O valor em Libras eh de: %.2f \n", Libras);

    // Pausa para mostrar na tela
    system ("pause"); 
}