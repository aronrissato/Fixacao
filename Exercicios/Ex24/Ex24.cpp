// Ex24.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


int main() {

	int a, b, troca;


	printf("Informe o valor da variável A: ");
	scanf_s("%i", &a);

	printf("Informe o valor da variável B: ");
	scanf_s("%i", &b);

	troca = a;
	a = b;
	b = troca;


	printf("O novo valor de A é: ", a);
	printf("O novo valor de B é: ", b);

	system("pause");
	return 0;
}