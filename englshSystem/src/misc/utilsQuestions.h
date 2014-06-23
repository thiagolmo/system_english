/*
 * utilsQuestions.h
 *
 *  Created on: 21/06/2014
 *      Author: jvidiri
 */

#ifndef UTILSQUESTIONS_H_
#define UTILSQUESTIONS_H_

#include "util.h"

typedef struct{
	char* question;
	char* optA;
	char* optB;
	char* optC;
	char* optD;
	char correctOpt;
}questions_t;

result_t xMakeQuestions();
void vShowTestResult(result_t result);

#endif /* UTILSQUESTIONS_H_ */
