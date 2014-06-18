/*SEMANA 2 (7-13) - João - Texto
	       	- Isabela - Questões de 6 à 10
		- Thiago - Questões de 1 à 5
SEMANA 3 (14-20) - DEFINIR NA SEMANA 2 AS ATIVIDADES PARA CADA INTEGRANTE
SEMANA 4 (21-26) - MELHORAR O CÓDIGO*/

//DECLARAÇÃO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

//DECLARAÇÃO DE VARIAVEIS GLOBAIS
char nome_usuario[50],resposta[9];
int acertos,n_pergunta;

//FUNÇÃO PULAR LINHA
void pular_linha(){
	printf("\n\n\n\n\n\n\n");}
//FIM FUNÇÃO PULAR LINHA

//FUNÇÃO RESULTADO TESTE
void resultado_teste(){
            system("cls");
            printf("\n\n\n                          %c%c%c%c%c%c%c%c%c%c Test Result %c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
            printf("\n\n");
            printf("\n                   Name: %s",nome_usuario);
            printf("\n                   Correct answers: : %i",acertos);
            printf("\n                   Wrong answers: %i\n\n",10-acertos);
            printf("\n\n                                 Back to menu %c",16);
            system("pause>null");
            }
//FIM FUNÇÃO RESULTADO TESTE

//FUNÇÃO AUXILIA PERGUNTA
void auxilia_pergunta(){
	scanf("%s", &resposta[n_pergunta]);
            system("cls");
			pular_linha();
			n_pergunta++;}
//FIM FUNÇÃO AUXILIA PERGUNTA

//FUNÇÃO VERIFICA RESPOSTA
void verifica_resposta(){
	int i;
	char gabarito[9];
    gabarito[0]='C';	gabarito[1]='D';	gabarito[2]='C';	gabarito[3]='B';	gabarito[4]='B';	gabarito[5]='C';	gabarito[6]='C';	gabarito[7]='A';	gabarito[8]='D';	gabarito[9]='B';
		for (i=0;i<5;i++){
               if (toupper(resposta[i])==(gabarito[i])){
            acertos++;
            }

	}}
//FIM FUNÇÃO VERIFICA RESPOSTA

//FUNÇÃO MENU DE OPÇÕES
int menu()
{
    int opcao; //DELARAÇÃO VARIALVEL LOCAL INTEIRA


	system("cls"); //LIMPAR TELA

	printf("\n\n\n                            %c%c%c%c%c%c%c%c%c%c MENU %c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205); //IMPRIMIR CARACTERES ANSII
	printf("\n\n");
	printf("\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	printf("\n\n");
	printf("       Enter the option: ");
	scanf("%i", &opcao);

	switch( opcao )	{  //ARGUMENTO DO CASO


	//        ###### OPÇÃO 5 - SAIR #######
        case 5:
        {
            break;
        }

        //        ###### FIM OPÇÃO 5 - SAIR #######


        //        ###### OPÇÃO 3 - TESTE #######
	case 3:	{
	    acertos=0;
        n_pergunta=0;

			int certo=0,errado=0;
			system("cls");
			pular_linha();
			printf("                            Press enter to start %c",16);
			system("pause>null"); //FUNÇÃO SYSTEM PAUSE SEM MENSAGEM
			system("cls");
			pular_linha();

			// PERGUNTAS DO TESTE

			//##1##
			printf("                        1) What is Friendster?\n\n                        a) A brand.\n                        b) A city.\n                        c) A social network.\n                        d) A game\n\n                        	Answer: "); //PERGUNTA UM
			auxilia_pergunta();
			//##FIM 1##

			//##2##
			printf("                        2) Complete the sentence: \"At its peak, \n                        the network had well over ______ users, \n                        many in south east Asia\".\n\n                        a) 20 million\n                        b) 1/5 dozen\n                        c) 50 trillion\n                        d) 100 million\n\n                          	Answer: "); //PERGUNTA DOIS                         d) Game\n                           	Answer: "); //PERGUNTA UM
			auxilia_pergunta();
			//##FIM 2##


            //##3##
			printf("                        3) What was one of the main reasons for\n                        the collapse suffered by Friendster?\n\n                        a) The name of the site has changed.\n                        b) Stopped working weekend.\n                        c) Its design changed.\n                        d) It did not allow people who were over 25 years old.\n\n                          	Answer: "); //PERGUNTA TRÊS                         d) Game\n                           	Answer: "); //PERGUNTA UM
			auxilia_pergunta();
			//##FIM 3##


            //##4##
			printf("                        4) Who benefited from the collapse\n                        of Friendster?\n\n                        a) Google.\n                        b) Facebook.\n                        c) Club Hadware.\n                        d) Baixaki.\n\n                        	Answer: "); //PERGUNTA QUATRO
			auxilia_pergunta();
			//##FIM 4##


			//##5##
			printf("                        5) Where did Friendster keep alive,\n                        its collapse as a social\n                        game platform?\n\n                        a) America.\n                        b) Asia.\n                        c) Africa.\n                        d) Europe.\n\n                        	Answer: "); //PERGUNTA CINCO
			auxilia_pergunta();
			//##FIM 5##

			verifica_resposta();
            resultado_teste();


            menu();
			break;
			//  #####FIM OPÇÃO 3 - TESTE #######
		}
	    //        ###### OPÇÃO ? - INVALIDO #######
		default:{

			printf("\n\n                                Option invalid! ");
			system("pause>null");
			menu();
	   //        ###### FIM OPÇÃO ? - INVALIDO #######
            }

	}





	return 0;
	system("pause");
}
// FIM MENU DE OPÇÕES

//LOGIN DO SISTEMA
int main()
{
	pular_linha();
	printf("                          What's your name: ");
	scanf("%s", nome_usuario);
	system("cls");
	pular_linha();
	printf("                                Welcome %s %c", nome_usuario,1);
	pular_linha();
	system("\npause>null");
	menu();

	return 0;
}
//FIM DO LOGIN
