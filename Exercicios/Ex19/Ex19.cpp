// Ex19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>




int main()
{
	int i, j,  a, b;

	a = 0;
	b = 0;

	for (i = 0; i < 3; i++){
		for (j = 1; j < 3; j++)
		{
			a++;
			printf("%i\t", a);

		}

		b++;
		printf("%i\n", b);
	}
}
