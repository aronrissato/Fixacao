// Ex08.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>


char InformaIdade(int idade) 
{

	if (idade > 18)
	{
		printf("Adulto\n");
	}
	if (idade <= 17 && idade >= 14)
	{
		printf("Juvenil B\n");
	}
	if (idade <= 13 && idade <= 11)
	{
		printf("Juvenil A\n");
	}
	if (idade <= 10 && idade <= 8)
	{
		printf("Infantil B\n");
	}
	if (idade <= 7 && idade <= 5)
	{
		printf("Infantil A\n");
	}

	return;
}


int main()
{
	int idade;

	printf("Digite sua idade: \n");
	scanf_s("%i", &idade);


	InformaIdade(idade);

	system("pause");
	return 0;
}