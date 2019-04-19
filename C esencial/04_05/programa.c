// Macros
// Biblioteca
#include <stdio.h>
// Cria as macros
#ifndef APP_ID
	#define APP_ID "com.empresa.app\n"
#endif
#ifndef trace
	#define trace(integer) printf("File: %s Line: %d Int: %d\n", __FILE__, __LINE__, integer);
#endif
// Funcao principal
int main(int argc, char const *argv[])
{
	printf(APP_ID);
	trace(8)
	return 0;
}