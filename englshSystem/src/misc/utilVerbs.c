/*
 * utilVerbs.c
 *
 *  Created on: 21/06/2014
 *Author: jvidiri
 */

#include "utilVerbs.h"
#include <time.h>

/*
 * Verbos irregulares
 * */
static const xIrregularVerbs_t const pxIrregularVerbs[] = {
		/*	Infinitivo | Past 	| Participle */
		{"arise","arose", "arisen"  },
		{"awake","awoke","awoken"},
		{"be","was, were ","been"},
		{"bear","bore","borne"},
		{"beat","beat","beaten"},
		{"become ","became","become"},
		{"befall ","befell","befallen"},
		{"beget","begot","begotten, begot"},
		{"begin","began","begun"},
		{"behold ","beheld","beheld"},
		{"bend","bent","bent"},
		{"bet","bet","bet"},
		{"bid","bid","bid"},
		{"bind","bound","bound"},
		{"bite","bit","bitten"},
		{"bleed","bled","bled"},
		{"blow","blew","blown"},
		{"break","broke","broken"},
		{"breed","bred","bred"},
		{"bring","brought","brought"},
		{"broadcast","broadcast ","broadcast"},
		{"build","built","built"},
		{"buy","bought","bought"},
		{"cast","cast","cast"},
		{"catch","caught","caught"},
		{"choose ","chose","chosen"},
		{"cling","clung","clung"},
		{"come","came","come"},
		{"cost","cost","cost"},
		{"creep","crept","crept"},
		{"cut","cut","cut"},
		{"deal","dealt","dealt"},
		{"dig","dug","dug"},
		{"do","did","done"},
		{"draw","drew","drawn"},
		{"drink","drank","drunk"},
		{"drive","drove","driven"},
		{"eat","ate","eaten"},
		{"fall","fell","fallen"},
		{"feed","fed","fed"},
		{"feel","felt","felt"},
		{"fight","fought","fought"},
		{"find","found","found"},
		{"flee","fled","fled"},
		{"fling","flung","flung"},
		{"fly","flew","flown"},
		{"forbid ","forbade","forbidden"},
		{"forget ","forgot","forgot, forgotte"},
		{"forgive ","forgave","forgiven"},
		{"freeze ","froze","frozen"},
		{"get","got","gotten, got "},
		{"give","gave","given"},
		{"go","went","gone"},
		{"grind","ground","ground"},
		{"grow","grew","grown"},
		{"have","had","had"},
		{"hear","heard","heard"},
		{"hide","hid","hidden, hid "},
		{"hit","hit","hit"},
		{"hold","held","held"},
		{"hurt","hurt","hurt"},
		{"keep","kept","kept"},
		{"know","knew","known"},
		{"lay","laid","laid"},
		{"lead","led","led"},
		{"leave","left","left"},
		{"lend","lent","lent"},
		{"let","let","let"},
		{"lie","lay","lain"},
		{"lose","lost","lost"},
		{"make","made","made"},
		{"mean","meant","meant"},
		{"meet","met","met"},
		{"overcome ","overcame ","overcome"},
		{"overtake ","overtook ","overtaken "},
		{"pay","paid","paid"},
		{"put","put","put"},
		{"quit","quit","quit"},
		{"read","read","read"},
		{"ride","rode","ridden"},
		{"ring","rang","rung"},
		{"rise","rose","risen"},
		{"run","ran","run"},
		{"saw","sawed","sawn"},
		{"say","said","said"},
		{"see","saw","seen"},
		{"seek","sought","sought"},
		{"sell","sold","sold"},
		{"send","sent","sent"},
		{"set","set","set"},
		{"shake","shook","shaken"},
		{"shed","shed","shed"},
		{"shine","shone","shone"},
		{"shoot","shot","shot"},
		{"show","showed","shown"},
		{"shrink","shrank","shrunk"},
		{"shut","shut","shut"},
		{"sing","sang","sung"},
		{"sink","sank","sunk"},
		{"sit","sat","sat"},
		{"slay","slew","slain"},
		{"sleep","slept","slept"},
		{"slide","slid","slid"},
		{"sling","slung","slung"},
		{"speak","spoke","spoken"},
		{"spend","spent","spent"},
		{"spin","spun","spun"},
		{"spit","spit, spat","spit, spat "},
		{"spread","spread","spread"},
		{"spring","sprang","sprung"},
		{"stand","stood","stood"},
		{"steal","stole","stolen"},
		{"stick","stuck","stuck"},
		{"sting","stung","stung"},
		{"stink","stank","stunk"},
		{"strike","struck","struck"},
		{"string","strung","strung"},
		{"strive","strove","striven"},
		{"swear","swore","sworn"},
		{"sweep","swept","swept"},
		{"swim","swam","swum"},
		{"swing","swung","swung"},
		{"take","took","taken"},
		{"written","wrote","write"},
		{"wound","wound","wind"},
		{"won","won","win"},
		{"worn","wore","wear"},
		{"upheld","upheld","uphold"},
		{"understood ","understood","understand "},
		{"undergone ","underwent ","undergo"},
		{"trodden","trod","tread"},
		{"thrown","threw","throw"},
		{"thought","thought ","think"},
		{"told","told","tell"},
		{"torn","tore","tear"},
		{"taught","taught","teach"},
};

/*
 * pergunta ao usuario se ele deseja continuar
 * */
int more(){
	char aux;
	int retorno = 0;

	printCentralize("continue? (y|n)");
	scanf(" %c",&aux);
	if (toupper(aux) != 'N'){
		retorno = 1;
	}
	return retorno;
}

/*
 * Faz as perguntas relacionadas a verbos.
 * */
void makeVerbQuestions(){
	do {

		//preparando a função randomica.
		srand(time(NULL));
		//pegando um verbo qualquer
		int verb = 0;
		verb = rand() % (sizeof(pxIrregularVerbs) / sizeof(xIrregularVerbs_t));
		//pegando alternativas aleatórias.
		int verbAlt1 = 0;
		int verbAlt2 = 0;
		int verbAlt3 = 0;
		//garantindo que não havera alternativas iguais.
		do {
			verbAlt1 = rand() % (sizeof(pxIrregularVerbs) / sizeof(xIrregularVerbs_t));
		} while (verbAlt1 == verb);

		do {
			verbAlt2 = rand() % (sizeof(pxIrregularVerbs) / sizeof(xIrregularVerbs_t));
		} while (verbAlt2 == verb);

		do {
			verbAlt3 = rand() % (sizeof(pxIrregularVerbs) / sizeof(xIrregularVerbs_t));
		} while (verbAlt3 == verb);

		//escolhendo uma questão.
		int question = rand();
		char printAux[50];

		//fazendo as questões.
		switch (question % 6) {
		case 0:
			//get infinitive and asks for participle.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvInfinitive);
			printCentralize(printAux);
			printCentralize("What is the Participle?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verbAlt1].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verbAlt2].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verb].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verbAlt3].pvParticiple);
			printCentralize(printAux);
			break;
		case 1:
			//get infinitive and asks for past.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvInfinitive);
			printCentralize(printAux);
			printCentralize("What is the Past?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verbAlt1].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verb].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verbAlt3].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verbAlt2].pvPast);
			printCentralize(printAux);
			break;
		case 2:
			//get participle and asks for infinitive.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvParticiple);
			printCentralize(printAux);
			printCentralize("What is the Infinitive?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verbAlt2].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verbAlt1].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verbAlt3].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verb].pvInfinitive);
			printCentralize(printAux);
			break;
		case 3:
			//get participle and asks for past.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvParticiple);
			printCentralize(printAux);
			printCentralize("What is the past?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verb].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verbAlt2].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verbAlt3].pvPast);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verbAlt1].pvPast);
			printCentralize(printAux);
			break;
		case 4:
			//get past and asks for infinitive.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvPast);
			printCentralize(printAux);
			printCentralize("What is the Infinitive?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verbAlt1].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verb].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verbAlt3].pvInfinitive);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verbAlt2].pvInfinitive);
			printCentralize(printAux);
			break;
		case 5:
			//get past and asks for participle.
			sprintf(printAux,"Verb : %s" ,pxIrregularVerbs[verb].pvPast);
			printCentralize(printAux);
			printCentralize("What is the participle?");
			sprintf(printAux, "a)%s", pxIrregularVerbs[verb].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "b)%s", pxIrregularVerbs[verbAlt2].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "c)%s", pxIrregularVerbs[verbAlt3].pvParticiple);
			printCentralize(printAux);
			sprintf(printAux, "d)%s", pxIrregularVerbs[verbAlt1].pvParticiple);
			printCentralize(printAux);
			break;
		default:
			break;
		}
		//TODO contabilizar pontuação.
	} while (more() == 0);
}

