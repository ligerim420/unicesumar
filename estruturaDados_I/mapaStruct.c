#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define qtd 5

struct atividades{
	int RA[10];
	int matProf[10];
	char nome[10];
	char extArq[10];
};

struct tfila{
	struct atividades dados[qtd];
	int ini;
	int fim;
};
struct atividades atv1;
struct atividades *a;
struct tfila fila;
struct tfila *f;
int op;
void insert();
void remv();
void show();
void menu();
void clear();

int main(){

	setlocale(LC_ALL, "Portugues");

	op = 1;
	fila.ini = 0;
	fila.fim = 0;
while(op != 0) {
 system("cls");
 show();
 menu();
 scanf("%d", &op);
 switch(op){
  case 1:
	  insert();
  break;
  case 2:
		remv();
  break;
  case 3:
	  clear();
  break;
 }
}
return(0);
}

void insert(){
	if(fila.fim == qtd){
 		printf("\n\n********** !!A FILA ESTA CHEIA!! ***********\n\n");
		system("pause");
		} else{
			system("cls");
			printf("Digite o RA do aluno: ");
 			scanf("%s", fila.dados[fila.fim].RA);
 			printf("Digite o nome do arquivo: ");fflush(stdin);
 			fgets(fila.dados[fila.fim].nome, 10,stdin);
 			printf("Digite a extensao do arquivo: ");
 			scanf("%s", fila.dados[fila.fim].extArq);
 			printf("Digite a matricula do professor: ");
 			scanf("%s", fila.dados[fila.fim].matProf);fflush(stdin);
 			fila.fim++;
			}
	}
void remv(){
	if( fila.ini == fila.fim){
	 	printf("\n\n************* !!FILA VAZIA!! **************\n\n");
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

void show(){
	int i;
	
	printf("*********************LISTA********************** \n\n");
	
	for(i=0; i<fila.fim; i++){
 				printf("\n >RA do aluno: %s\n", fila.dados[i].RA);
 				printf("\n >Nome do arquivo: %s\n", fila.dados[i].nome);
				printf(" >Extensao do arquivo: %s\n", fila.dados[i].extArq);
				printf("\n >Matricula do professor: %s\n\n", fila.dados[i].matProf);	
	}
	printf("************************************************\n\n");
}
void menu(){
	printf("*********************MENU:**********************\n\n");
	printf("1- Inserir atividade\n");
	printf("2- Remover atividade\n");
	printf("3- Apagar lista de atividades\n");
	printf("0- Sair\n\n");
}
void clear(){
	
		if( fila.ini == fila.fim){
	 	printf("\n\n************* !!FILA VAZIA!! **************\n\n");
		system("pause");
	} else{
 		int i;
	do{
	
 		for (i = 0; i < fila.fim; i++){
  		fila.dados[i] = fila.dados[i+1];
 		}
 		fila.dados[fila.fim];
 		fila.fim--;
 }while(fila.fim > fila.ini);
	}
	
}
