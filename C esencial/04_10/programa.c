// Trabalhando com erros
// Bibliotecas
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
// Cria variavel para os erros
extern int errno;
// Funcao principal
int main(int argc, char const *argv[])
{
	FILE *file = fopen("nothing.txt", "r");
	if (file == NULL)
	{
		perror("Falha");
		char *errorString = strerror(errno);
		fprintf(stderr, "<Falha> %s\n", errorString);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
	puts("final");
	return 0;
}