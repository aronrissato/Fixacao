// Ex07.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;

	printf("Escreva um valor para A: \n");
	scanf_s("%i", &a);

	printf("Escreva um valor para B: \n");
	scanf_s("%i", &b);

		if (a % b == 0)
		{
			printf("Os numeros sao multiplos.\n");
		}
		else
		{
			printf("Nao sao multiplos.\n");
		}

	return 0;
}