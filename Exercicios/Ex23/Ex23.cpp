// Ex23.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
const int KM_LITRO = 12;

int main() {

	float vVelMedia, vTempo, vDistancia, vConsumo;


	printf("Algoritmo 00013 - Algoritmos sequenciais. Show Delphi.\n");
	system("chcp 1252 > nul");

	printf("\nInforme o tempo gasto na viagem em horas: ");
	scanf_s("%f", &vTempo);

	printf("\nInforme a velocidade média em KM/H: ");
	scanf_s("%f", &vVelMedia);

	vDistancia = vTempo * vVelMedia;

	vConsumo = vDistancia / KM_LITRO;

	printf("\nA distancia percorida foi de: %-7.2f KM", vDistancia);
	printf("\nO consumo foi de: %-7.2f litros", vConsumo);

	printf("\n\n");
	system("pause");

	return 0;
}