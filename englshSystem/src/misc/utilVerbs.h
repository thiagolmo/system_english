/*
 * utilVerbs.h
 *
 *  Created on: 21/06/2014
 *      Author: jvidiri
 */

#ifndef UTILVERBS_H_
#define UTILVERBS_H_

#include "util.h"

/**
 * Estrutura para os verbos irregulares.
 * */
typedef struct{
	char* pvInfinitive;
	char* pvPast;
	char* pvParticiple;
}xIrregularVerbs_t;

void makeVerbQuestions();

#endif /* UTILVERBS_H_ */
