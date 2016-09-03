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

// Declaração da variável numero.
int numero = 2;

// Declara que o ponteiro é igual à posição da variável numero.
int *ptr_numero = &numero;

int main(int argc, char *argv[])//esses argumentos nós não utilizamosa, eles já estão no projeto. 
{
	
	//Solicita um número para o usuário.
	printf("Insira um numero: ");
	
	//Armazena o número inserido no ponteiro. 
	//scanf("%i", &numero);
	
	//Armazena o endereço da variável original.
	scanf("%i", ptr_numero);
	
	//Imprime na telao número inserido.
	//printf("\nO numero inserido foi: %i!", numero);
	
	//Imprime o conteudo da variável pra qual o ponteiro está apontando.
	printf("\nO numero inserido foi: %i!", *ptr_numero);
	
	//Retorna zero.
	return 0;
}
