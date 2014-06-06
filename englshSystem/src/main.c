#include <stdio.h>  //DECLARAÇÃO DE BIBLIOTECAS
#include <stdlib.h> //DECLARAÇÃO DE BIBLIOTECAS
#include <string.h> //DECLARAÇÃO DE BIBLIOTECAS
#include <ctype.h> //DECLARAÇÃO DE BIBLIOTECAS

//DECLARAÇÃO DE VARIAVEIS GLOBAIS
char nome_usuario[50];

//FUNÇÃO PULAR LINHA
void pular_linha(){
	printf("\n\n\n\n\n\n\n\n");}
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

        case 5: //NESSA CASO SAI
        {

            break;
        }
	case 3:
	{
			//        ###### OPÇÃO3 - TESTE #######
			char resposta;
			int certo=0,errado=0;
			system("cls"); //LIMPAR TELA
			pular_linha();
			printf("                                  Press enter to start");
			system("pause>null");
			system("cls"); //LIMPAR TELA
			pular_linha();
			
             // PERGUNTAS
	     //##1##
			printf("                           1) What is Friendster?\n                           a) Brand\n                           b) City\n                           c) Social Network\n                           d) Game\n                           	Answer: "); //PERGUNTA UM
			scanf("%s", &resposta);
			if ((resposta=='C') || (resposta=='c')){
        			certo=certo+1;}
			else{
                		errado=errado+1;}
			system("cls");
			pular_linha();

	    //##2##
			printf(				"                           2) Complete the sentence: \"At its peak, the network had well over ______ users, many in south east Asia\".\n                           a) 20 million\n                           b) 1/5 dozen\n                           c) 50 trillion\n                           d) 100 million\n                           	Answer: "); //PERGUNTA DOIS                         d) Game\n                           	Answer: "); //PERGUNTA UM
			scanf("%s", &resposta);
			if (resposta=='D' || resposta=='d'){
                		certo=certo+1;}
			else{
                		errado=errado+1;}
            system("cls");
			pular_linha();

            //##3##
			printf(				"                           3) What was one of the main reasons for the collapse suffered by Friendster?\n                           a) The name of the site has changed\n                           b) Stopped working weekend\n                           c) Your desing changed\n                           d) was not allowed to people over 25 years\n                           	Answer: "); //PERGUNTA TRÊS                         d) Game\n                           	Answer: "); //PERGUNTA UM
			scanf("%s", &resposta);
			if (resposta=='C' || resposta=='c'){
                		certo=certo+1;}
			else{
                		errado=errado+1;}
            system("cls");
			pular_linha();

            //##4##
			printf(				"                           4) Who benefited from the collapse of Friendster?\n                           a) Google\n                           b) Facebook\n                           c) Club Hadware\n                           d) Baixaki\n                           	Answer: "); //PERGUNTA QUATRO
			scanf("%s", &resposta);
			if (resposta=='B' || resposta=='b'){
                		certo=certo+1;}
			else{
                		errado=errado+1;}
            system("cls");
			pular_linha();

	    //##5##
			printf(				"                           5) Where Friendster keeps alive, afiter collapse, as a social game plataform?\n                           a) America\n                           b) Asia\n                           c) Africa\n                           d) Europe\n                           	Answer: "); //PERGUNTA CINCO
			scanf("%s", &resposta);
			if (resposta=='B' || resposta=='b'){
                		certo=certo+1;}
			else{
                		errado=errado+1;}
            system("cls");
			pular_linha();


            printf("%i %i",certo,errado);
            system("pause");
            menu();
			break;
			//  #####FIM OPÇÃO 3 - TESTE #######
		}
		default:{
			printf("invalid");
            menu();}
	}




	return 0;
	system("pause");
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
