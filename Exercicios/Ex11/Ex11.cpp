// Ex11.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

float CalculoRaio(int raio)
{
	float pi, area;

	pi = 3.14159;

	area = pi * (raio ^ 2);

	return area;
}




int main()
{
	int raio;

	printf("Informe o raio da circunferencia: \n");
	scanf_s("%i", &raio);

	printf("A area da circunferencia eh de: %2.2f\n", CalculoRaio(raio));


}
