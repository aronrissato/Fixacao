// Ex22.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int matrizA[3][4];
	int matrizB[4][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Insira o elemento [%i][%i] da Matriz A\n", i, j);
			scanf_s("%i", &matrizA[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%i\t", matrizA[i][j]);

		}
		printf("\n");

	}
	system("pause");

	for (i = 0; i < 4; i++)
	{

		for (j = 0; j < 3; j++)
		{
			matrizB[i][j] = matrizA[j][i];
		}

	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i\t", matrizB[i][j]);
		}

		printf("\n");
	}


	system("pause");
	return (0);
}