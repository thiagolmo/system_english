#include <stdio.h>  //DECLARAÇÃO DE BIBLIOTECAS
#include <stdlib.h> //DECLARAÇÃO DE BIBLIOTECAS


//DECLARAÇÃO DE VARIAVEIS GLOBAIS
char nome_usuario[50];


//FUNÇÃO MENU DE OPÇÕES
int menu()
{
    system("cls");
	printf("                            ########## MENU ###########");
	printf("\n\n");
	printf("\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	printf("\n\n");
	printf("       Enter the option:");
    system("pause");
	return 0;
}
// FIM MENU DE OPÇÕES
int pular_linha(){
printf("\n\n\n\n\n\n\n\n");    
}
//FUNÇÃO PULAR LINHA

//FIM FUNÇÃO PULAR LINHA

//LOGIN DO SISTEMA
int main(){
pular_linha();
printf("                                What's your name: ");
scanf("%s",&nome_usuario);
system("cls");
pular_linha();
printf("                                Welcome %s",nome_usuario);
pular_linha();
system("\npause");
menu();
}
//FIM DO LOGIN
