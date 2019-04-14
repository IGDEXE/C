// Configura as bibliotecas
# include <stdio.h>
# include <stdlib.h>

// Chama a função principal
int main()
{
    // Define as variaveis
    int i, total = 0;

    // Cria o loop
    for (i = 0; i <= 100; i++)
    {
        // Faz a conta
        total = total + i; 
    }

    // Mostra resultado na tela
    printf("A soma de todos os numeros entre 1 e 100 eh %d \n", total);
    system ("pause");  
}