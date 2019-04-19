// Operacoes simples
// Biblioteca
#include <stdio.h>
// Funcao principal
int main(int argc, char const *argv[])
{
	// Calcula a idade
	int AnoNascimento = 1996; // Ano de nascimento
	int AnoAtual = 2019; // Ano atual
	int Idade = AnoAtual - AnoNascimento; // Faz o calculo
	printf("Idade: %d\n", Idade); // Mostra na tela
	// Faz uma soma
	int Num1 = 10;
	int Num2 = 25;
	printf("Soma: %d\n", Num1+Num2);
	// Multiplicacao
	int ten = 10;
	int three = 3;
	printf("Multiplicacao: %d\n", ten*three);
	// Divisao
	double result = (double)ten/(double)three; // Converte para double
	printf("Divisao: %f\n", result); // Exibe a divisao
	printf("Resto: %d\n", ten%three); // Exibe o resto
	return 0;
}