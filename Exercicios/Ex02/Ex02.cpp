// Ex02.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Conta(int A, int B, int C)
{
	int D, R, S;

	R = pow((A + B), 2);
	S = pow((B + C), 2);

	D = (R + S) / 2;

	return D;
}



int main()
{
	int A, B, C, resultado;

	printf("Informe o primeiro numero: \n");
	scanf_s("%i", &A);

	printf("Informe o segundo numero: \n");
	scanf_s("%i", &B);

	printf("Informe o terceiro numero: \n");
	scanf_s("%i", &C);

	resultado = Conta(A, B, C);

	printf("O total da conta eh de: %i\n", resultado);


	system("pause");
	return 0;
}
