// Tipos avancados
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Cria um tipo inteiro e mostra o tamanho
	int integer = 9;
	printf("%lu\n", sizeof(integer));
	// Cria um inteiro curto e mostra o tamanho
	short int sh = 9;
	printf("%lu\n", sizeof(sh));
	// Cria um inteiro longo e mostra o tamanho
	long int lng = 9;
	printf("%lu\n", sizeof(lng));
	// Cria um assinado e um nao assinado
	signed int sinteger = 9;
	unsigned int uinteger = 128;
	// Constante
	float const ftl = 3.14159f;
	// Booleano
	enum boolean
	{
		NO,
		YES
	};
	// Exibe na tela
	printf("No = %d\n", NO);
	printf("Yes = %d\n", YES);
	return 0;
}