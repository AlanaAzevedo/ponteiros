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

// Declara��o da vari�vel numero.
int numero = 2;

// Declara que o ponteiro � igual � posi��o da vari�vel numero.
int *ptr_numero = &numero;

int main(int argc, char *argv[])//esses argumentos n�s n�o utilizamosa, eles j� est�o no projeto. 
{
	
	//Solicita um n�mero para o usu�rio.
	printf("Insira um numero: ");
	
	//Armazena o n�mero inserido no ponteiro. 
	//scanf("%i", &numero);
	
	//Armazena o endere�o da vari�vel original.
	scanf("%i", ptr_numero);
	
	//Imprime na telao n�mero inserido.
	//printf("\nO numero inserido foi: %i!", numero);
	
	//Imprime o conteudo da vari�vel pra qual o ponteiro est� apontando.
	printf("\nO numero inserido foi: %i!", *ptr_numero);
	
	//Retorna zero.
	return 0;
}
