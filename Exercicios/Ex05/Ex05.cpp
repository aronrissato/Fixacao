// Ex05.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

float CalculaTaxa(float valorfab)
{
	float custototal;

	custototal = valorfab + (28 * valorfab / 100) + (45 * valorfab / 100);

	return custototal;
}


int main()
{
	float valorfab;

	printf("Informe o valor do carro pela fabrica: \n");
	scanf_s("%f", &valorfab);


	float Total = CalculaTaxa(valorfab);

	printf("O valor total a ser pago pelo veiculo eh de: %.2f\n", Total);


	system("pause");
	return 0;
}

