////////////////////////////////////////////////////////////////
// Programa exemplo de utiliza��o de ponteiros
//
// Laborat�rio de Algoritmo II
//
// Autora: Alana Azevedo, acad�mica do curso de Sistemas de Informa��o, da Faculdade Antonio Meneghetti
// Data: 02/09/2016
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])//esses argumentos n�s n�o utilizamosa, eles j� est�o no projeto. 
{
	// Cria��o e inicializa��o das vari�veis.
	int variavel_1 = 1, variavel_2 = 2;
	char controle = 'n', descarga;
	
	// Cria��o dos ponteiros.
	int *ponteiro_1, *ponteiro_2;
	
	// Enquanto.
	while (1)
	{
		// Inicializa��o dos ponteiros.
		// Ponteiro_1 recebe o endere�o da variavel_1.
		ponteiro_1 = &variavel_1;
		// Ponteiro_2 recebe o endere�o da variavel_2.
		ponteiro_2 = &variavel_2;
		
		// Exibe o valr contido em cada vari�vel a partir do endere�o contido 
		//nos ponteiros.
		printf("\nvariavel_1 = %i", *ponteiro_1);
		printf("\nvariavel_2 = %i", *ponteiro_2);
		
		// Exibe a solicita��o de controle.
		printf("\n\nDeseja finalizar o programa? (s/n) ");
		// Efetua a leitura do comando.
		scanf("%c", &controle);
		// Se o comando indicar a finaliza��o, finaliza o loop.
		if (controle == 's') break;
		
		// Exibe a solicita��o de um valor.
		printf("\nDigite um valor para a variavel_1: ");
		// Efetua a leitura do valor e transfere o valor para a variavel_1.
		scanf("%i", ponteiro_1);
		// Exibe a solicita��o de um valor.
		printf("Digite um valor para a variavel_2: ");
		// Efetua a leitura do valor e tranfere o valor para a variavel_2.
		scanf("%i%c", ponteiro_2, &descarga);
		
	}
	//Retorna zero.
	return 0;
}
