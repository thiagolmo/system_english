#include <stdio.h>  //DECLARAÇÃO DE BIBLIOTECAS
#include <stdlib.h> //DECLARAÇÃO DE BIBLIOTECAS
#include <string.h> //DECLARAÇÃO DE BIBLIOTECAS
#include <ctype.h>

//DECLARAÇÃO DE VARIAVEIS GLOBAIS
char nome_usuario[50];

//FUNÇÃO PULAR LINHA
void pular_linha()
{
	printf("\n\n\n\n\n\n\n\n");
}
//FIM FUNÇÃO PULAR LINHA

//FUNÇÃO MENU DE OPÇÕES
int menu()
{
	int opcao; //DELARAÇÃO VARIALVEL LOCAL INTEIRA
	system("cls"); //LIMPAR TELA
	printf("                            ########## MENU ###########");
	printf("\n\n");
	printf("\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	printf("\n\n");
	printf("       Enter the option:");
	scanf("%i", &opcao);
	switch( opcao )
	{  //ARGUMENTO DO CASO
		case 3:
		{
			//        ###### OPÇÃO3 - TESTE #######
			char aux, resposta;
			system("cls"); //LIMPAR TELA
			pular_linha();
			printf("                                  Press enter to start");
			system("pause>null");
			system("cls"); //LIMPAR TELA
			pular_linha();
			printf("                           1) What is Friendster?\n                           a) Brand\n                           b) City\n                           c) Social Network\n                           d) Game\n                           	Answer: "); //PERGUNTA UM
			scanf("%s", &aux);
			aux = toupper(aux);
			system("cls"); //LIMPAR TELA
			pular_linha();
			printf(
				"                           2) Complete the sentence: \"At its peak, the network had well over ______ users, many in south east Asia\".\n                           a) 20 million\n                           b) 1/5 dozen\n                           c) 50 trillion\n                           d) 100 million\n                           	Answer: "); //PERGUNTA DOIS                         d) Game\n                           	Answer: "); //PERGUNTA UM
			scanf("%s", &resposta);
			system("pause>null");

			break;
			//  #####FIM OPÇÃO 3 - TESTE #######
		}
		default:
			printf("invalid");
	}
	menu();

	system("pause");
	return 0;
}
// FIM MENU DE OPÇÕES

//LOGIN DO SISTEMA
int main()
{
	pular_linha();
	printf("                                What's your name: ");
	scanf("%s", nome_usuario);
	system("cls");
	pular_linha();
	printf("                                Welcome %s", nome_usuario);
	pular_linha();
	system("\npause>null");
	menu();

	return 0;
}
//FIM DO LOGIN
