// Funcoes
// Biblioteca
#include <stdio.h>
// Cria a funcao
void Maior(int numA, int numB)
{
	int result;
	// Verifica se A eh maior que B
	if (numA > numB)
	{
		result = numA;
	}
	// Verifica se B eh maior que A
	else if (numA < numB)
	{
		result = numB;
	}
	// Retorna o valor
	return result;
}
// Funcao principal
int main(int argc, char const *argv[])
{
	// Testa a funcao
	int max = Maior(86, 50);
	printf("%d\n", max);
	int maxB = Maior(1, 900);
	printf("%d\n", maxB);
	return 0;
}