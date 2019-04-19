// Estruturas
// Biblioteca
#include <stdio.h>
#include <stdlib.h>
// Cria uma estrutura
typedef struct Cat
{
	char *name;
	int birth;
	float weight;
} Cat;
// Cria um tipo longo
typedef long long int BigInt;
// Funcao principal
int main(int argc, char const *argv[])
{
	// Instancia a variavel
	Cat *dan = malloc(sizeof(Cat));
	// Configura
	dan->name = "Dan";
	dan->birth = 2009;
	dan->weight = 3.980f;
	// Mostra os dados
	printf("Name: %s Birth: %d Weight: %f\n", dan->name, dan->birth, dan->weight);
	free(dan);
	// Mostra o inteiro
	BigInt bInt = 45;
	printf("%lld\n", bInt);
	return 0;
}