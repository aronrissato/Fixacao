// Ex26.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


int main() 
{
	int idade, total;

	printf("Informe sua idade: \n");
	scanf_s("%i", &idade);

	total = idade * 365;

	printf("Voce ja viveu %i dias.\n", total);

	system("pause");
	return 0;
}

