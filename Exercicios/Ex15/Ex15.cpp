// Ex15.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main() {
	int x, n, potencia, contador;


	printf("\nDigite um numero inteiro: ");
	scanf_s("%i", &x);
	printf("Digite um numero um inteiro que nao seja negativo: ");
	scanf_s("%i", &n);

	potencia = 1;
	contador = 0;

	while (contador != n) {
		potencia = potencia * x;
		contador = contador + 1;
	}

	printf("\nO valor de %i elevado a %i: %i\n", x, n, potencia);


	system("pause");
	return 0;
}
