// Estrutura de decisao
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Genero
	char genero = 'f';
	if (genero == 'm')
	{
		puts("Menino");
	}
	else if (genero == 'f')
	{
		puts("Menina");
	}
	// Maioridade
	int idade = 15;
	if (idade > 12 && idade < 18)
	{
		puts("Adolescente");
	}
// Caso
	char character = 'B';
	switch(character)
	{
		case 'a':
			puts("Alpha");
			break;
		case 'b':
		case 'B':
			puts("Beta");
			break;
		default:
			puts("??");
	}
	return 0;
}