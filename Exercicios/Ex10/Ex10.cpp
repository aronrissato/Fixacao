// Ex10.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{

	int quantidadeComprada, codigoProduto;
	float precoTotal, precoUnitario;

	printf("Informe o codigo do produto: \n");
	scanf_s("%i", &codigoProduto);

	printf("Informe a quantidade de produto comprado: \n");
	scanf_s("%i", &quantidadeComprada);

	switch (codigoProduto)
	{
	case 1001:
		precoUnitario = 5.32;	
		break;
	case 1324:
		precoUnitario = 6.45;
		break;
	case 6548:
		precoUnitario = 2.37;	
		break;
	case 987:
		precoUnitario = 5.32;	
		break;
	case 7623:
		precoUnitario = 6.45;
		break;
	
	default:

		printf("Codigo invalido!\n");

		break;
	}

	precoTotal = quantidadeComprada * precoUnitario;

	printf("O total a pagar eh de: %2.2f\n", precoTotal);

	system("pause");

	return 0;
}