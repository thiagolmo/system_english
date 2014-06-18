/*
 * util.c
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri
 */

#include "util.h"
#include "utilFile.h"

/*
 * Requisitando informaçẽso do usuario
 * */
void vGetUserInfo(char nome_usuario[50]) {
	pularNlinha(8);
	printf("                                What's your name: ");
	scanf("%s", nome_usuario);
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	pularNlinha(8);
	printf("                                Welcome %s", nome_usuario);
	pularNlinha(8);
	system("\npause>null");
}

/**
 * pula n linhas no console.
 * */
void pularNlinha(int n) {
	while (n > 0) {
		printf("\n");
		n--;
	}
}

/**
 * Realiza a opção 3 do menu.
 * */
void vMakeOption3() {
	acertos = 0;
	nPergunta = 0;

	int certo = 0, errado = 0;
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	pularNlinha(8);
	printf("                            Press enter to start %c", 16);
	system("pause>null"); //FUNÇÃO SYSTEM PAUSE SEM MENSAGEM
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	pularNlinha(8);

	// PERGUNTAS DO TESTE

	//##1##
	printf(
			"                        1) What is Friendster?\n\n                        a) A brand.\n                        b) A city.\n                        c) A social network.\n                        d) A game\n\n                        	Answer: "); //PERGUNTA UM
	vAuxiliaPergunta();
	//##FIM 1##

	//##2##
	printf(
			"                        2) Complete the sentence: \"At its peak, \n                        the network had well over ______ users, \n                        many in south east Asia\".\n\n                        a) 20 million\n                        b) 1/5 dozen\n                        c) 50 trillion\n                        d) 100 million\n\n                          	Answer: "); //PERGUNTA DOIS                         d) Game\n                           	Answer: "); //PERGUNTA UM
	vAuxiliaPergunta();
	//##FIM 2##

	//##3##
	printf(
			"                        3) What was one of the main reasons for\n                        the collapse suffered by Friendster?\n\n                        a) The name of the site has changed.\n                        b) Stopped working weekend.\n                        c) Its design changed.\n                        d) It did not allow people who were over 25 years old.\n\n                          	Answer: "); //PERGUNTA TRÊS                         d) Game\n                           	Answer: "); //PERGUNTA UM
	vAuxiliaPergunta();
	//##FIM 3##

	//##4##
	printf(
			"                        4) Who benefited from the collapse\n                        of Friendster?\n\n                        a) Google.\n                        b) Facebook.\n                        c) Club Hadware.\n                        d) Baixaki.\n\n                        	Answer: "); //PERGUNTA QUATRO
	vAuxiliaPergunta();
	//##FIM 4##

	//##5##
	printf(
			"                        5) Where did Friendster keep alive,\n                        its collapse as a social\n                        game platform?\n\n                        a) America.\n                        b) Asia.\n                        c) Africa.\n                        d) Europe.\n\n                        	Answer: "); //PERGUNTA CINCO
	vAuxiliaPergunta();
	//##FIM 5##

	vVerificaResposta();
	vResultadoTeste();
}

/**
 *	realiza a opição numero 1 do menu.
 */
void vMakeOption1() {
	int abril = iOpenFile("./text.txt");
	if (abril == 0) {
		vPrintText();
		vcloseFile();
	}
}

/*
 * executa a opição escolhida pelo usuario
 * */
void vExecuteOption(int opcao) {
	switch (opcao) {
	case 1: {
		vMakeOption1();
		break;
	}
	case 3: {
		vMakeOption3();
		break;
		//  #####FIM OPÇÃO 3 - TESTE #######
	}
	default:
		printf("invalid");
	}
}

/*
 * Mostra a mensagem de despedida
 * */
void vMensagemDespedida() {
	printf("Ate mais =D");
}

/*
 * apresenta o resultado dos teste.
 * */
void vResultadoTeste() {
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	printf(
			"\n\n\n                          %c%c%c%c%c%c%c%c%c%c Test Result %c%c%c%c%c%c%c%c%c%c",
			205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
			205, 205, 205, 205, 205, 205, 205);
	printf("\n\n");
	printf("\n                   Name: %s", nomeUsuario);
	printf("\n                   Correct answers: : %i", acertos);
	printf("\n                   Wrong answers: %i\n\n", 10 - acertos);
	printf("\n\n                                 Back to menu %c", 16);
	system("pause>null");
}

void vVerificaResposta() {
	int i;
	char gabarito[9];
	gabarito[0] = 'C';
	gabarito[1] = 'D';
	gabarito[2] = 'C';
	gabarito[3] = 'B';
	gabarito[4] = 'B';
	gabarito[5] = 'C';
	gabarito[6] = 'C';
	gabarito[7] = 'A';
	gabarito[8] = 'D';
	gabarito[9] = 'B';
	for (i = 0; i < 5; i++) {
		if (toupper(resposta[i]) == (gabarito[i])) {
			acertos++;
		}

	}
}

/*
 * Mostra auxilio para a pergunta.
 * */
void vAuxiliaPergunta() {
	scanf("%s", &resposta[nPergunta]);
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	pularNlinha(8);
	nPergunta++;
}

/**
 * Printa o menu principal em tela
 * */
void vPrintMainMenu() {
	printf(
			"\n\n\n                            %c%c%c%c%c%c%c%c%c%c MENU %c%c%c%c%c%c%c%c%c%c",
			205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
			205, 205, 205, 205, 205, 205, 205); //IMPRIMIR CARACTERES ANSII
	pularNlinha(2);
	printf(
			"\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	pularNlinha(2);
	printf("       Enter the option:");
}
