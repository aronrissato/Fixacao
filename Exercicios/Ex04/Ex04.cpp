// Ex04.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


float CalculoMedia(float nota1, float nota2, float nota3)
{
	float media;

	media = ((nota1 * 2.3) + (nota2 * 5) + nota3) / (2.3 + 5);


	return media;
}


int main()
{
	float nota1, nota2, nota3;


	printf("Informe a primeira nota: \n");
	scanf_s("%f", &nota1);

	printf("Informe a segunda nota: \n");
	scanf_s("%f", &nota2);

	printf("Informe a terceira nota: \n");
	scanf_s("%f", &nota3);

	float MostraMedia = CalculoMedia(nota1, nota2, nota3);

	printf("Sua media eh: %2.1f\n", MostraMedia);

	system("pause");
	return 0;
}

