// Ex01.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Formula(int x1, int y1, int x2, int y2)
{
	float d;

	d = sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));

	return d;
}



int main()
{
	int x1, x2, y1, y2;
	float resultado;

	printf("Informe o primeiro valor para X:\n");
	scanf_s("%i", &x1);

	printf("Informe o primeiro valor para Y: \n");
	scanf_s("%i", &y1);

	printf("Informe o segundo valor para X:\n");
	scanf_s("%i", &x2);

	printf("Informe o segundo valor para Y: \n");
	scanf_s("%i", &y2);

	resultado = Formula(x1, y1, x2, y2);

	printf("A distancia entre os pontos eh de: %2.f\n", resultado);


	system("pause");
	return 0;
}

