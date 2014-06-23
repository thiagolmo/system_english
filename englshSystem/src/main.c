/*
 * main.c
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri, Isabela e thiago
 */

#include "misc/util.h"
#include "misc/menu.h"

//FUNÇÃO MENU DE OPÇÕES
int menu()
{
	//Eu sei que eh um loop infinito, mas lá dentro eu trato isso.
	while(1==1){
		//variaveis locais.
		int opcao;
		//colocando o menu na tela
		vPrintMainMenu();
		//vamos limpar as escolhar do input
		fflush(stdin);
		//pego a instrução do usuario
		scanf("%i", &opcao);
		if (opcao > 5 || opcao < 0){
			printf("Please select a valid options.");
		}else if (opcao != 5){
			clearScreen();
			//executo a opção
			vExecuteOption(opcao);
		}else{
			//cancelo o while
			break;
		}
	}
	return 0;
}

/**
 * Função principal.
 */
int main(int argc, char *argv[]) {
	//pegando as informaçẽos do usuario
	vGetUserInfo();
//	//entrando no loop do menu
	menu();
//	//mostrando mensagem de despedida
	vMensagemDespedida();
	return 0;
}
