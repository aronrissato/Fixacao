// Ex28.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


float SalarioTotal(float salario, float salariominimo, int qntcarros) 
{
	float salariofinal;

	salariofinal = (salariominimo * 2)



		return salariofinal;
}





int main()
{
	float salario, salariominimo;
	int qntcarros;


	printf("Informe o valor do salario minimo: \n");
	scanf_s("%f", &salariominimo);

	printf("Informe a quantidade de carros vendidos: \n");
	scanf_s("%f", &qntcarros);

	SalarioTotal(salario, salariominimo, qntcarros);


	system("pause");
	return 0;


}

