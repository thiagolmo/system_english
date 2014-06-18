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
	system("cls");
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
 * Realiza a opição 3 do menu.
 * */
void vMakeOption3() {
	//        ###### OPÇÃO3 - TESTE #######
	char aux, resposta;
	system("cls"); //LIMPAR TELA
	pularNlinha(8);
	printf("                                  Press enter to start");
	system("pause>null");
	system("cls"); //LIMPAR TELA
	pularNlinha(8);
	printf(
			"                           1) What is Friendster?\n                           a) Brand\n                           b) City\n                           c) Social Network\n                           d) Game\n                           	Answer: "); //PERGUNTA UM
	scanf("%s", &aux);
	aux = toupper(aux);
	system("cls"); //LIMPAR TELA
	pularNlinha(8);
	printf(
			"                           2) Complete the sentence: \"At its peak, the network had well over ______ users, many in south east Asia\".\n                           a) 20 million\n                           b) 1/5 dozen\n                           c) 50 trillion\n                           d) 100 million\n                           	Answer: "); //PERGUNTA DOIS                         d) Game\n                           	Answer: "); //PERGUNTA UM
	scanf("%s", &resposta);
	system("pause>null");
}

/*
 * executa a opição escolhida pelo usuario
 * */
void vExecuteOption(int opcao) {
	switch (opcao) {
	case 1: {
		int abril = iOpenFile("./text.txt");
		if (abril == 0){
			vPrintText();
			vcloseFile();
		}
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

/**
 * Printa o menu principal em tela
 * */
void vPrintMainMenu() {
	printf("                            ########## MENU ###########");
	pularNlinha(2);
	printf("\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	pularNlinha(2);
	printf("       Enter the option:");
}
