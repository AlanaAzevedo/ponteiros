////////////////////////////////////////////////////////////////
// Programa exemplo de utilização de ponteiros
//
// Laboratório de Algoritmo II
//
// Autora: Alana Azevedo, acadêmica do curso de Sistemas de Informação, da Faculdade Antonio Meneghetti
// Data: 02/09/2016
////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])//esses argumentos nós não utilizamosa, eles já estão no projeto. 
{
	// Criação e inicialização das variáveis.
	int variavel_1 = 1, variavel_2 = 2;
	char controle = 'n', descarga;
	
	// Criação dos ponteiros.
	int *ponteiro_1, *ponteiro_2;
	
	// Enquanto.
	while (1)
	{
		// Inicialização dos ponteiros.
		// Ponteiro_1 recebe o endereço da variavel_1.
		ponteiro_1 = &variavel_1;
		// Ponteiro_2 recebe o endereço da variavel_2.
		ponteiro_2 = &variavel_2;
		
		// Exibe o valr contido em cada variável a partir do endereço contido 
		//nos ponteiros.
		printf("\nvariavel_1 = %i", *ponteiro_1);
		printf("\nvariavel_2 = %i", *ponteiro_2);
		
		// Exibe a solicitação de controle.
		printf("\n\nDeseja finalizar o programa? (s/n) ");
		// Efetua a leitura do comando.
		scanf("%c", &controle);
		// Se o comando indicar a finalização, finaliza o loop.
		if (controle == 's') break;
		
		// Exibe a solicitação de um valor.
		printf("\nDigite um valor para a variavel_1: ");
		// Efetua a leitura do valor e transfere o valor para a variavel_1.
		scanf("%i", ponteiro_1);
		// Exibe a solicitação de um valor.
		printf("Digite um valor para a variavel_2: ");
		// Efetua a leitura do valor e tranfere o valor para a variavel_2.
		scanf("%i%c", ponteiro_2, &descarga);
		
	}
	//Retorna zero.
	return 0;
}
