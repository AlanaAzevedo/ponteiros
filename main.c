////////////////////////////////////////////////////////////////
// Programa exemplo de utilização de ponteiros
//
// Laboratório de Algoritmo II
//
// Autora: Alana Azevedo, acadêmica do curso de Sistemas de Informação, da Faculdade Antonio Meneghetti
// Data: 09/09/2016
////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef struct
{
	int indice;
	char nome [50];
	char telefone [15];
	char endereco [50];
	char email [50];
}entrada;

int main()
{
	//criação e inicializaçãp das variáveis e ponteiros.
	entrada Pagina_01;
	entrada *Ptr = &Pagina_01;
	
	//Pagina_01.Indice = 1;
	//Pagina_01.Nome = ("Alana Azevedo da Silva");
	//Pagina_01.Telefone = ("(51) 9719-6069");
	
	printf("\nInsira a entrada: ");
	//scanf("%i", &Pagina_01.indice);
	scanf ("%i", &Ptr->indice);
	//scanf ("%i", &(*Ptr).indice);
	
	
	printf("\nInsira o nome: ");
	scanf("%s", &Pagina_01.nome);

	printf("\nInsira o telefone: ");
	scanf("%s", &Pagina_01.telefone);
	
	printf("\nEntrada: %i", Pagina_01.indice);
	//printf("\nNome: %s", Pagina_01.nome);
	printf("\nNome: %s", Ptr->nome);
	printf("\nNome: %s", (*Ptr).nome);
	printf("\nTelefone: %s", Pagina_01.telefone);
	
	//retorna 0
	return 0;
}
