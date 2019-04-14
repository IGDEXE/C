// Leia quatro notas, calcule a media aritmetica e imprima o resultado
// Ivo Dias

// Bibliotecas
# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Define as variaveis
    float nota1, nota2, nota3, nota4, media;

    // Recebe os numeros
    printf("Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);
    printf("Informe a terceira nota: ");
    scanf("%f",&nota3);
    printf("Informe a quarta nota: ");
    scanf("%f",&nota4);

    // Faz a conta
    media = ((nota1 + nota2 + nota3 + nota4) /4);

    // Mostra o resultado
    printf("A media final eh: %.2f \n", media);

    // Pausa para mostrar na tela
    system ("pause"); 
}