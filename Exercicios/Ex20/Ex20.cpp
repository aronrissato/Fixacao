// Ex20.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#define M 3 
#define N 4 




void funcao(int x[][], int lin, int col)
{
	int i, j;

	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			if (x[i][j] < 0) {
				x[i][j] = -x[i][j];
			}
		}
	}
}



int main() {

	int mat[M][N], i, j;

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++) {
			printf("Informe mat[%d][%d]: ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	printf("Matriz antes\n");
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%i\t", mat[i][j]);
		printf("\n");
	}
	funcao(mat, M, N);
	printf("Matriz depois\n");
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%i\t", mat[i][j]);
		printf("\n");
	}

	return 0;

}