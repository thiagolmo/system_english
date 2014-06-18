///*
// * main.c
// *
// *  Created on: Jun 18, 2014
// *      Author: jvidiri
// */
//
//#include "misc/util.h"
//
///**
// * main menu.
// * */
//int menu() {
//	//Eu sei que eh um loop infinito, mas lá dentro eu trato isso.
//	while(1==1){
//		//variaveis locais.
//		int opcao;
//		////system("cls");<- não funciona em todos os sistemas, vamos fazer melhor. <- isso não funciona em todos os sistemas.
//
//		//colocando o menu na tela
//		vPrintMainMenu();
//		//TODO validar a opção do usuario
//		//pego a instrução do usuario
//		scanf("%i", &opcao);
//		if (opcao != 5){
//			//executo a opção
//			vExecuteOption(opcao);
//		}else{
//			//cancelo o while
//			break;
//		}
//	}
//	return 0;
//}
//
///**
// * Função principal.
// */
//int main() {
//	//pegando as informaçẽos do usuario
//	vGetUserInfo(nomeUsuario);
//	//entrando no loop do menu
//	menu();
//	//mostrando mensagem de despedida
//	vMensagemDespedida();
//	return 0;
//}
