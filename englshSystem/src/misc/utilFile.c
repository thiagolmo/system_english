/*
 * utilFile.c
 *
 *  Created on: Jun 18, 2014
 *      Author: jvidiri
 */

#include "util.h"

FILE *arquivo;

/**
 * Apresenta o texto em tela
 * */
void vPrintText(){
	 char line[255];

	 while (!feof(arquivo)){
		 //AQUI O CODIGO QUE EU ESTAVA TRABALHANDO
//		 char aux[80];//considero que uma palavra pode ter até 80 caracteres
		 //lemos uma palavra
//		 fscanf(arquivo,"%s",aux);
//		 if (strlen(line)+strlen(aux) < 80 ){
//			 //colocamos ela na linha
//			 sprintf(line,"%s %s",line, aux);
//		 }else{
//			 //printamos a linha e começamos de novo
//			 printf("%s\n",line);
//			 memset(line,0,sizeof(line));
//		 }
		 fgets(line,255,arquivo);
	     printf("%s",line);
	 }
}

/**
 * Abre o arquivo passado como parametro
 * */
int iOpenFile(char* path){
	 arquivo = fopen(path,"r");
	 if (arquivo == NULL){
		 printf("Erro ao abrir o arquivo\n");
		 return 1;
	 }
	 return 0;
}

void vcloseFile(){
	fclose(arquivo);
}
