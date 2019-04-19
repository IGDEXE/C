// IO
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Cria as variaveis
	char twitter[140];
	int tweets;
	// Recebe os valores
	printf("Twitter username: @");
	scanf("%s %d", twitter, &tweets);
	// Exibe
	printf("https://twitter.com/%s (%d tweets)\n", twitter, tweets);
	return 0;
}