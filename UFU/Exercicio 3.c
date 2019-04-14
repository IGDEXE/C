// 3) Peça ao usuario para digitar tres valores inteiros e imprima a soma deles
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    int a, b, c, d;

    // Recebe os numeros
    printf("Informe um numero inteiro: ");
    scanf("%d",&a);

    printf("Informe um segundo numero inteiro: ");
    scanf("%d",&b);

    printf("Informe um terceiro numero inteiro: ");
    scanf("%d",&c);

    // Faz a soma
    d = (a + b + c);

    // Escreve na tela
    printf("A soma dos numeros informados eh: %d \n", d);
    
    // Pausa para mostrar na tela
    system ("pause");  
}