// Leia um numero real e imprima o resultado do quadrado desse numero
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float numero, quadrado;

    // Recebe o numero
    printf("Informe um numero real: ");
    scanf("%f",&numero);

    // Faz a conta
    quadrado = numero * numero;

    // Mostra o resultado
    printf("O quadrado do numero eh: %.2f \n", quadrado);

    // Pausa para mostrar na tela
    system ("pause"); 
}