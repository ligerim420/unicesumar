#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

struct atividades{
	int RA[10];
	int matProf[10];
	char nome[30];
	char extArq[10];
};

struct tfila{
	struct atividades dados[qtd];
	int ini;
	int fim;
};
struct atividades atv1;
struct tfila fila;
int op;
void fila_entrar();
void fila_sair();
void fila_encerrar();
void fila_mostrar();
void menu_mostrar();

int main(){

	setlocale(LC_ALL, "Portuguese");

	op = 1;
	fila.ini = 0;
	fila.fim = 0;
while(op != 0) {
 system("cls");
 fila_mostrar();
 menu_mostrar();
 scanf("%d", &op);
 switch(op){
  case 1:
	  fila_entrar();
  break;
  case 2:
	  fila_sair();
  break;
  case 3:
	  fila_encerrar();
  break;
 }
}
return(0);
}

void fila_entrar(){
	if(fila.fim == qtd){
 		printf("\n\n*************************** A FILA ESTÁ CHEIA! ************************\n\n");
		system("pause");
		} else{
			printf("Digite o RA DO ALUNO: ");
 			scanf("%s", fila.dados[fila.fim].RA);
 			printf("Digite o NOME DO ALUNO: ");
 			fflush(stdin);
 			fgets(fila.dados[fila.fim].nome, 30,stdin);
			//scanf("%s", fila.dados[fila.fim].nome);
 			printf("Digite a EXTENSÃO do arquivo: ");
 			scanf("%s", fila.dados[fila.fim].extArq);
 			printf("Digite a MATRÍCULA do professor: ");
 			scanf("%s", fila.dados[fila.fim].matProf);
 			fflush(stdin);
 			fila.fim++; 
			}
	}
void fila_sair(){
	if( fila.ini == fila.fim){
	 	printf("\n\n************************* FILA VAZIA! ********************************\n\n");
		system("pause");
	} else{
 		int i;

 		for (i = 0; i < qtd; i++){
  		fila.dados[i] = fila.dados[i+1];
 		}
 	fila.dados[fila.fim];
 	fila.fim--;
	}
}
void fila_encerrar(){
}
void fila_mostrar(){
	int i;
	
	printf("*********************LISTA********************** \n\n");
	
	for(i=0; i<fila.fim; i++){
 				printf("\n >RA do Aluno: %s\n", fila.dados[i].RA);
 				printf("\n >NOME DO ALUNO: %s\n", fila.dados[i].nome);
				printf(" >EXTENSÃO DO ARQUIVO: %s\n", fila.dados[i].extArq);
				printf("\n >MATRÍCULA DO PROFESSOR: %s\n\n", fila.dados[i].matProf);	
	}
	printf("************************************************\n\n");
}
void menu_mostrar(){
	printf("\n*********************MENU:**********************\n\n");
	printf("1 - Enserir novo elemento na Fila\n");
	printf("2 - Remover elemento da Fila\n");
	printf("3 - Limpar a Fila\n");
	printf("0 - ENCERRAR O PROGRAMA\n\n");
}
