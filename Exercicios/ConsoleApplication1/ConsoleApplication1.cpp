#include "pch.h"
#include <stdio.h>
#include <iostream>


float Conta(float gasolina) {
	float alcool;

	alcool = gasolina * 0.7;
	
	return alcool;
}


int main()
{
	float gasolina, total;

	printf("Informe o valor da gasolina:\n");
	scanf_s("%f", &gasolina);

	total =	Conta(gasolina);

	printf("O valor esperado para o alcool eh de %f\n\n", total);

	system("pause");
	return 0;
}
