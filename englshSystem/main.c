#include <stdio.h>  //DECLARAÇÃO DE BIBLIOTECAS
#include <stdlib.h> //DECLARAÇÃO DE BIBLIOTECAS


//DECLARAÇÃO DE VARIAVEIS GLOBAIS
char nome_usuario[50];

//FUNÇÃO PULAR LINHA
int pular_linha(){
printf("\n\n\n\n\n\n\n\n");
}
//FIM FUNÇÃO PULAR LINHA




//FUNÇÃO MENU DE OPÇÕES
int menu()
{
	int opcao; //DELARAÇÃO VARIALVEL LOCAL INTEIRA
    system("cls"); //LIMPAR TELA
	printf("                            ########## MENU ###########");
	printf("\n\n");
	printf("\n                   1 - Text: An Autopsy of a Dead Social Network");
	printf("\n                   2 - Game");
	printf("\n                   3 - Test");
	printf("\n                   4 - Raking");
	printf("\n                   5 - Exit");
	printf("\n\n");
	printf("       Enter the option:");
	scanf("%i",&opcao);
	switch (opcao){  //ARGUMENTO DO CASO
	case 3:
	    //        ###### OPÇÃO3 - TESTE #######
                        char resposta[]
                        system("cls"); //LIMPAR TELA
                        pular_linha();
                        printf("                                  Press enter to start");
                        system("pause>null");
                        system("cls"); //LIMPAR TELA
                        pular_linha();
                        printf("                           1) What is Friendster?\n                           a) Brand\n                           b) City\n                           c) Social Network\n                           d) Game\n                           	Answer: "); //PERGUNTA UM
                        system("pause>null");





                        break;
         //  #####FIM OPÇÃO 3 - TESTE #######

        default:
        printf("invalid");
                                        }
        menu();




        system("pause");
	return 0;
}
// FIM MENU DE OPÇÕES



//LOGIN DO SISTEMA
int main(){
pular_linha();
printf("                                What's your name: ");
scanf("%s",&nome_usuario);
system("cls");
pular_linha();
printf("                                Welcome %s",nome_usuario);
pular_linha();
system("\npause>null");
menu();
}
//FIM DO LOGIN
