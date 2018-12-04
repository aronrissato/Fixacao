// Ex09.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float MediaAritimetica(float nota1, float nota2, float nota3)
{
	float media;

	media = (nota1 + nota2 + nota3) / 3;

	return media;
}

float MediaPonderada(float nota1, float nota2, float nota3)
{
	float media;

	media = (nota1 * 3) + (nota2 * 3) + (nota3 * 4) / 3 + 3 + 4;

	return media;
}

float MediaHarmonica(float nota1, float nota2, float nota3)
{
	float media;

	media = 3 / (1 / nota1) + (1 / nota2) + (1 / nota3);

	return media;
}



int main()
{
	float nota1, nota2, nota3, resultado;
	int opcao;

	printf("Digite a primeira nota: \n");
	scanf_s("%f", &nota1);

	printf("Digite a segunda nota: \n");
	scanf_s("%f", &nota2);

	printf("Digite a terceira nota: \n");
	scanf_s("%f", &nota3);

	printf("|-------------------------------|\n");
	printf("|\t1 - Media Aritimetica\t|\n");
	printf("|\t2 - Media Ponderada\t|\n");
	printf("|\t3 - Media Harmonica\t|\n");
	printf("|\t\t\t\t|\n");
	printf("|\t0 - Sair\t\t|\n");
	printf("|_______________________________|\n");
	printf("Escolha uma opcao:\n");
	scanf_s("%i", &opcao);

	if (opcao == 1)
	{
		resultado = MediaAritimetica(nota1, nota2, nota3);

		printf("\nO resultado da media escolhida eh de: %1.2f\n", resultado);
	}
	if (opcao == 2)
	{
		resultado = MediaPonderada(nota1, nota2, nota3);
		printf("O resultado da media escolhida eh de: %f1.2\n", resultado);
	}
	if (opcao == 3)
	{
		resultado = MediaHarmonica(nota1, nota2, nota3);
		printf("O resultado da media escolhida eh de: %f1.2\n", resultado);
	}
	if (opcao == 0)
	{
		printf("Falowz nois\n");
	}

	system("pause");
	return 0;
}
