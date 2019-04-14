// Leia um numero real e imprima a quinta parte deste numero
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float numero, quinto;

    // Recebe o numero
    printf("Informe um numero real: ");
    scanf("%f",&numero);

    // Faz a conta
    quinto = (numero/5);

    // Mostra o resultado
    printf("A quinta parte do numero eh: %.2f \n", quinto);

    // Pausa para mostrar na tela
    system ("pause"); 
}