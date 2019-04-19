// Vetores
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Cria a variavel
	char vetor[] = "Hola mundo";
	// char vetor[] = {'H', 'o', 'l', 'a', '\0'}; Exemplo de declaracao
	// Exibe na tela o valor e alguns dados
	printf("Vetor: %s Tamanho do vetor: %ld Tamanho do tipo char: %ld\n", vetor, sizeof(vetor), sizeof(char));
	// Cria um vetor de numeros
	int serie[] = {7, 8, 90, 120};
	long int serieSize = sizeof(serie);
	printf("Tamanho do vetor: %ld Tamanho do tipo inteiro: %ld\n", serieSize, sizeof(int));
	return 0;
}