// Ex21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>




int main()
{
	int n;

	printf("Informe um numero: \n");
	scanf_s("%i", &n);

	printf("\n");

	do
	{
		n--;

		if (n % 2 == 0)
		{
			printf("%i\n", n + n);
		}

	} while (n > 0);


	system("pause");
	return 0;

}
