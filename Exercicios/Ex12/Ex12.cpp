// Ex12.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


float CalculoArea(int base, int altura)
{
	float area;

	area = (base * altura) / 2;

	return area;
}




int main()
{
	int base, altura;
	float resultado;


	printf("Informe a base do triangulo: \n");
	scanf_s("&i", &base);

	printf("Informe a altura do triangulo: \n");
	scanf_s("&i", &altura);

	resultado = CalculoArea(base, altura);


	printf("A area do triangolo eh: %f\n", resultado);

	system("pause");
	return 0;
}

