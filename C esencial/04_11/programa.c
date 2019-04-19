// GoTo
// Biblioteca
#include <stdio.h>
// Funcao Fatorial
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	int result = n * factorial(n-1);
	return result;
}
// Funcao principal
int main(int argc, char const *argv[])
{
	// Faz o Loop
	goto welcome;
	printf("1! %d\n", factorial(1));
	printf("3! %d\n", factorial(3));
	welcome:
		printf("Bem vindo\n");
	return 0;
}