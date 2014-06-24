/*
 * util.h
 *
 *
 * Classe que agrega as funções que são uteis ao aplicativo.
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri
 */

#ifndef UTIL_H_
#define UTIL_H_

#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include <ctype.h>

typedef struct{
	int acertos;
	int erros;
}result_t;

void printCentralize(char* toPrint);
void vWaitForAnyKey();
void pularNlinha(int n);
void vMensagemDespedida();
void vGetUserInfo();
void clearScreen();
void vShowTestResult(result_t result);

#endif /* UTIL_H_ */

