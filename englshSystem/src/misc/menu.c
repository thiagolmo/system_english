/*
 * menu.c
 *
 *  Created on: 22/06/2014
 *      Author: jvidiri
 */

#include "menu.h"
#include "utilsQuestions.h"
#include "utilVerbs.h"
#include "utilFile.h"

/**
 *	realiza a opção numero 1 do menu.
 */
void vMakeOption1() {
	int abril = iOpenFile("./text.txt");
	if (abril == 0) {
		vPrintText();
		vcloseFile();
	}
	pularNlinha(1);
}

void showInitMessage() {
	char printAux[255];
	pularNlinha(8);
	sprintf(printAux, "Press enter to start... %c", 16);
	printCentralize(printAux);
	vWaitForAnyKey();
}

/**
 *	realiza a opção numero 3 do menu.
 */
void vMakeOption3(){
	showInitMessage();
	makeVerbQuestions();
}

/**
 * Realiza a opção 2 do menu.
 * */
void vMakeOption2() {
	showInitMessage();

	result_t result;
	result = xMakeQuestions();

	vShowTestResult(result);
}

/**
 *	realiza a opção numero 4 do menu.
 */
void vMakeOption4(){
	printCentralize("Not implemented yet.");
}

/*
 * executa a opção escolhida pelo usuario
 * */
void vExecuteOption(int opcao) {
	switch (opcao) {
	case 1: {
		vMakeOption1();
		break;
	}
	case 2: {
		vMakeOption2();
		break;
	}
	case 3: {
		vMakeOption3();
		break;
	}
	case 4: {
		vMakeOption4();
		break;
	}
	default:
		printf("invalid");
	}
}

/**
 * Printa o menu principal em tela
 * */
void vPrintMainMenu() {
	printCentralize("MENU");
	pularNlinha(2);
	printCentralize("1 - Text: An Autopsy of a Dead Social Network");
	printCentralize("2 - Text test                                ");
	printCentralize("3 - Verbs games                              ");
	printCentralize("4 - Raking                                   ");
	printCentralize("5 - Exit                                     ");
	printCentralize("Enter the option:");
}
