/*
 * util.c
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri
 */

#include "util.h"
#include "utilsQuestions.h"

// - variavel com o nome do usuario.
char nomeUsuario[50];
// - Variavel para auxiliar no print.
char printAux[50];

void clearScreen() {
	//TODO deve ser testado! =D
#ifdef _WIN32
	system("cls");
#elif __linux__
	system("clear");
#endif
}

/*
 * Requisitando informaçẽso do usuario
 * */
void vGetUserInfo() {
	pularNlinha(8);
	printCentralize("What's your name: ");
	memset(nomeUsuario, '0', 50);
	scanf("%s", nomeUsuario);
	//system("cls");<- não funciona em todos os sistemas, vamos fazer melhor.
	pularNlinha(8);

	sprintf(printAux, "Welcome %s", nomeUsuario);
	printCentralize(printAux);
	pularNlinha(8);
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

/*
 * Wait for any key.
 */
void vWaitForAnyKey() {
	fflush(stdin);
	char aux[10];
	scanf("%c", aux);
}

/*
 * Mostra a mensagem de despedida
 * */
void vMensagemDespedida() {
	printf("Ate mais =D");
}

void replaceChar(char* str, int n, char c) {
	str = strdup(str);
	str[n] = c;
}

/**
 * Centraliza o o texto na tela dependendo do seu tamanho.
 */
void printCentralize(char* toPrint) {
	long columns = 80;
	//TODO PROVAVEL QUE funcione no windows...
//	if (getenv("COLUMNS") != NULL){
//		columns = strtol(getenv("COLUMNS"), NULL, 10);
//	}
	if (strlen(toPrint) > columns) {
		printf("%s\n", toPrint);
	} else {
		int fwidth = strlen(toPrint) + (columns - strlen(toPrint)) / 2;
		printf("%*s\n", fwidth, toPrint);
	}
//	printf("\n");
}

/*
 * Apresenta o resultado do teste.
 * */
void vShowTestResult(result_t result) {
	char printAux[255];

	printCentralize(" Test Result");
	pularNlinha(2);
	sprintf(printAux, "Name: %s", nomeUsuario);
	printCentralize(printAux);
	sprintf(printAux, "Correct answers: : %i", result.acertos);
	printCentralize(printAux);
	sprintf(printAux, "Wrong answers: %i\n\n", result.erros);
	printCentralize(printAux);
	sprintf(printAux, "Back to menu %c", 16);
	printCentralize(printAux);
	system("pause>null");
}
