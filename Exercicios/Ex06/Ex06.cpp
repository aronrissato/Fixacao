// Ex06.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, soma;

	printf("Digite o valor de n: \n");
	scanf_s("%i", &n);


	soma = (n * (n + 1)) / 2;


	printf("A soma dos %i primeiros inteiros positivos eh de: %i\n", n, soma);

	system("pause");
	return 0;
}