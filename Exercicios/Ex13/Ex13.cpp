// Ex13.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>



int main()
{
	int n, i, impar;

	printf("Digite um valor para N: \n");
	scanf_s("%i", &n);

	i = 0;
	impar = 1;

	printf("Os %i primeiros impares sao:\n", n);
	while (i < n)
	{
		printf("%i\n", impar);

		impar = impar + 2;
		i = i + 1;
	}

	system("pause");
	return 0;
}

