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


int main()
{
	//criação e inicialização das variáveise ponteiros.
	//char Minha_String [] = {"1234567890"};
	char Minha_String [] = {'1','2','3','4','5','6','7','8','9','0'};
	char *Meu_Ponteiro = &Minha_String;
	
	//exibe o valor contido em cada posição da string a partir do endereço
	//contido no ponteiro.
	do
	{
		printf("\nO Meu_Ponteiro aponta para o valor: %c\n", *Meu_Ponteiro);
		Meu_Ponteiro++;
	}
	
	while (*Meu_Ponteiro != 0);
	
	printf("\nO tamanho da Minha_String e: %d\n", sizeof (Minha_String));
	
	//retorna 0
	return 0;
}
