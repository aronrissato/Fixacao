// Ex03.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int ano, mes, dia, aniversario;

	printf("Informe sua idade em dias: \n");
	scanf_s("%i", &aniversario);

	ano = (aniversario / 365);
	mes = (aniversario / 30);
	dia = (aniversario);

	printf("Voce tem: %i anos, %i meses, %i dias de vida.\n", ano, mes, dia);

	system("pause");
	return 0;
}
