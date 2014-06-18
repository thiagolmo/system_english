/*
 * util.h
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef UTIL_H_
#define UTIL_H_

/**
 * Estrutura para os verbos irregulares.
 * */
typedef struct{
	char* pvInfinitive;
	char* pvPast;
	char* pvParticiple;
}xIrregularVerbs_t;

/*
 * Verbos irregulares
 * */
static const xIrregularVerbs_t const pxIrregularVerbs[] = {
		/*	Infinitivo | Past 	| Participle */
		{	"arise",   "arose", "arisen"     },
		//Thiago preencher aqui é só seguir o esquema do primeiro.
};

/**
 * Classe que agrega as funções que são uteis ao aplicativo.
 * */

//variaveis globais
char nomeUsuario[50],resposta[9];
int acertos,nPergunta;

void vAuxiliaPergunta();
void vGetUserInfo(char nome_usuario[50]);
void vVerificaResposta();
void vResultadoTeste();
void vExecuteOption(int opcao);
void pularNlinha(int n);
void vMakeOption3();
void vMensagemDespedida();
void vPrintMainMenu();


#endif /* UTIL_H_ */
