// Lacos de repeticao
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Vetores de inteiros
	int numbers[] = {20, 40, 87, 190, 200};
	// Verifica a quantidade
	int count = sizeof(numbers)/sizeof(int);
	// Mostra com funciona a estrutura for
	for (int i = 0; i < count; i++)
	{
		printf("%d %d\n", i, numbers[i] );
	}
	// Mostra com funciona a estrutura while
	int stop = 20;
	int step = 0;
	while (step < stop)
	{
		printf("%d\n", step);
		step++;
	}
	return 0;
}