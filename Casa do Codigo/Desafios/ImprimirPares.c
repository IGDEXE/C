// Configura as bibliotecas
# include <stdio.h>
# include <stdlib.h>

// Chama a função principal
int main()
{
    // Define as variaveis
    int num; 

    // Escreve na tela
    printf("Os numeros pares entre 1 e 50 sao: \n");

    // Cria o loop
    for (num = 1; num < 51; num++)
    {
        // Faz a verificação
        if (num%2 == 0) // Valida se o resto é zero
        {
            printf("%d \n", num);
        }
    }

    // Pausa para mostrar na tela
    system ("pause");  
}