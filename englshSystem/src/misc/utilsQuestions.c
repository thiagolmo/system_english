/*
 * utilsQuestions.c
 *
 *  Created on: 21/06/2014
 *      Author: jvidiri
 */

#include "utilsQuestions.h"

int acertos;

/*
 * Questões e suas respostas.
 * */
static const questions_t const pxQuestions[] = {
		{"1) What is Friendster?","a) A brand.","b) A city.","c) A social network.","d) A game",'C'},
		{"2) Complete the sentence: \"At its peak, the network had well over ______ users,  many in south east Asia\".","a) 20 million","b) 1/5 dozen","c) 50 trillionm","d) 100 million",'D'},
		{"3) What was one of the main reasons for the collapse suffered by Friendster?","a) The name of the site has changed.","b) Stopped working weekend.","c) Its design changed.","d) It did not allow people who were over 25 years old.",'C'},
		{"4) Who benefited from the collapse of Friendster?","a) Google.","b) Facebook.","c) Club Hadware.","d) Baixaki.",'B'},
		{"5) Where did Friendster keep alive, its collapse as a social game platform?","a) America.","b) Asia.","c) Africa.","d) Europe.",'B'},
		{"6) What’s the main problem of Friendster, that contributed for its collapse?","a) User problems.","b) Page redesign.","c) Low cost-benefit.","d) User good distribution.",'C'},
		{"7) Who tried to buy Friendster?","a) Microsoft.","b) Facebook.","c) Google.","d) Digg.",'C'},
		{"8) In the sentence: \"Following the collapse of the social network Friendster, computer scientists have carried out a digital autopsy to find out what went wrong.\" The expression \"carried out\" can be replaced by:","a) made.","b) make.","c) do.","d) change.",'A'},
		{"9) When was Friendster founded, and when did it begin declining and died?","a) 2002 - 1009","b) 2003 - 2009","c) 2000 - 2008","d) 2002 - 2009",'D'},
		{"10) In the sentence:  \"Indeed, the collapse of Friendster has more than a passing resemblance to the collapse of Digg, a social news aggregator, following design changes that presumably altered the cost-to-benefit ratio for its users.\" The word \"Indeed\" can be replaced by ...","a) stressful","b) in fact","c) like that","d) just a little",'B'},
};


void vGetResposta(int index,result_t *result) {
	char chute;
	printCentralize("Answer:");
	fscanf(stdin," %c",&chute);
	if ( (toupper(chute)) == pxQuestions[index].correctOpt) {
		result->acertos++;
	}else{
		result->erros++;
	}
}

/**
 * Realiza as perguntas, retorna struct com os resultados.
 * */
result_t xMakeQuestions(){
	int i;
	result_t result;
	//init vars
	result.erros = 0;
	result.acertos = 0;

	for(i = 0; i < sizeof(pxQuestions) / sizeof(questions_t); i++)
	{
		printCentralize(pxQuestions[i].question);
		printCentralize(pxQuestions[i].optA);
		printCentralize(pxQuestions[i].optB);
		printCentralize(pxQuestions[i].optC);
		printCentralize(pxQuestions[i].optD);
		vGetResposta(i,&result);
		clearScreen();
	}
	return result;
}
