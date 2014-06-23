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
	
		{"arise",	"arose","arisen" },
		{"awake",	"awoke","awoken" },
		{"be",	"was,were","been" },
		{"bear",	"bore","borne" },
		{"beat",	"beat","beaten" },
		{"become",	"became","become" },
		{"befall",	"befell","befallen" },
		{"beget",	"begot","begotten,begot" },
		{"begin",	"began","begun" },
		{"behold",	"beheld","beheld" },
		{"bend",	"bent","bent" },
		{"bet",	"bet","bet" },
		{"bid",	"bid","bid" },
		{"bind",	"bound","bound" },
		{"bite",	"bit","bitten" },
		{"bleed",	"bled","bled" },
		{"blow",	"blew","blown" },
		{"break",	"broke","broken" },
		{"breed",	"bred","bred" },
		{"bring",	"brought","brought" },
		{"broadcast",	"broadcast","broadcast" },
		{"build",	"built","built" },
		{"buy",	"bought","bought" },
		{"cast",	"cast","cast" },
		{"catch",	"caught","caught" },
		{"choose",	"chose","chosen" },
		{"cling",	"clung","clung" },
		{"come",	"came","come" },
		{"cost",	"cost","cost" },
		{"creep",	"crept","crept" },
		{"cut",	"cut","cut" },
		{"deal",	"dealt","dealt" },
		{"dig",	"dug","dug" },
		{"do",	"did","done" },
		{"draw",	"drew","drawn" },
		{"drink",	"drank","drunk" },
		{"drive",	"drove","driven" },
		{"eat",	"ate","eaten" },
		{"fall",	"fell","fallen" },
		{"feed",	"fed","fed" },
		{"feel",	"felt","felt" },
		{"fight",	"fought","fought" },
		{"find",	"found","found" },
		{"flee",	"fled","fled" },
		{"fling",	"flung","flung" },
		{"fly",	"flew","flown" },
		{"forbid",	"forbade","forbidden" },
		{"forget",	"forgot","forgot,forgotte" },
		{"forgive",	"forgave","forgiven" },
		{"freeze",	"froze","frozen" },
		{"get",	"got","gotten,got" },
		{"give",	"gave","given" },
		{"go",	"went","gone" },
		{"grind",	"ground","ground" },
		{"grow",	"grew","grown" },
		{"have",	"had","had" },
		{"hear",	"heard","heard" },
		{"hide",	"hid","hidden,hid" },
		{"hit",	"hit","hit" },
		{"hold",	"held","held" },
		{"hurt",	"hurt","hurt" },
		{"keep",	"kept","kept" },
		{"know",	"knew","known" },
		{"lay",	"laid","laid" },
		{"lead",	"led","led" },
		{"leave",	"left","left" },
		{"lend",	"lent","lent" },
		{"let",	"let","let" },
		{"lie",	"lay","lain" },
		{"lose",	"lost","lost" },
		{"make",	"made","made" },
		{"mean",	"meant","meant" },
		{"meet",	"met","met" },
		{"overcome",	"overcame","overcome" },
		{"overtake",	"overtook","overtaken" },
		{"pay",	"paid","paid" },
		{"put",	"put","put" },
		{"quit",	"quit","quit" },
		{"read",	"read","read" },
		{"ride",	"rode","ridden" },
		{"ring",	"rang","rung" },
		{"rise",	"rose","risen" },
		{"run",	"ran","run" },
		{"saw",	"sawed","sawn" },
		{"say",	"said","said" },
		{"see",	"saw","seen" },
		{"seek",	"sought","sought" },
		{"sell",	"sold","sold" },
		{"send",	"sent","sent" },
		{"set",	"set","set" },
		{"shake",	"shook","shaken" },
		{"shed",	"shed","shed" },
		{"shine",	"shone","shone" },
		{"shoot",	"shot","shot" },
		{"show",	"showed","shown" },
		{"shrink",	"shrank","shrunk" },
		{"shut",	"shut","shut" },
		{"sing",	"sang","sung" },
		{"sink",	"sank","sunk" },
		{"sit",	"sat","sat" },
		{"slay",	"slew","slain" },
		{"sleep",	"slept","slept" },
		{"slide",	"slid","slid" },
		{"sling",	"slung","slung" },
		{"speak",	"spoke","spoken" },
		{"spend",	"spent","spent" },
		{"spin",	"spun","spun" },
		{"spit",	"spit,spat","spit,spat" },
		{"spread",	"spread","spread" },
		{"spring",	"sprang","sprung" },
		{"stand",	"stood","stood" },
		{"steal",	"stole","stolen" },
		{"stick",	"stuck","stuck" },
		{"sting",	"stung","stung" },
		{"stink",	"stank","stunk" },
		{"strike",	"struck","struck" },
		{"string",	"strung","strung" },
		{"strive",	"strove","striven" },
		{"swear",	"swore","sworn" },
		{"sweep",	"swept","swept" },
		{"swim",	"swam","swum" },
		{"swing",	"swung","swung" },
		{"take",	"took","taken" },
		{"teach",	"taught","taught" },
		{"tear",	"tore","torn" },
		{"tell",	"told","told" },
		{"think",	"thought","thought" },
		{"throw",	"threw","thrown" },
		{"tread",	"trod","trodden" },
		{"undergo",	"underwent","undergone" },
		{"understand",	"understood","understood" },
		{"uphold",	"upheld","upheld" },
		{"wear",	"wore","worn" },
		{"win",	"won","won" },
		{"wind",	"wound","wound" },
		{"write",	"wrote","written" },

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
