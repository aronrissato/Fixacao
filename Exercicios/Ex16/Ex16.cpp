// Ex16.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

   char vetor(char *string, char *letra) {
	   int *posicao, i, tamanho;

	   tamanho = strlen(string);
	   posicao = &string[0];

	   for (i = 1; i < tamanho; i++) {
		   if (*string == letra) {
			   *posicao = i;
		   }
		   posicao++;
		   string++;
	   }
   }


   int main() {
	   char string[100], letra;
	   int posicao[100];

	   printf("Digite uma frase: ");
	   gets_s(string);

	   printf("\nDigite uma letra: ");
	   scanf("%c", &letra);

	   vetor(string, letra);


	   system("pause");
	   return 0;
   }

