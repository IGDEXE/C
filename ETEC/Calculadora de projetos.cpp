#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

int main()
{
	double qf,qi,d,t1,t;
	printf(" Quantidade inicial : ");
	scanf("%f",&qi);
	printf("\n Quantidade final : ");
	scanf("%f",&qf);
	printf("\n Quantidade de dias : ");
	scanf("%f",&d);
	t1 = (0,7 * d) + 10;
	t =(((qf - qi)*0,25) + t1);
	printf("\n");
	printf("%2.f \n",&t1);
	printf("%2.f \n",&t);
	system("pause");
}

