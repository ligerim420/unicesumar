#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

struct taluno{
	char ra[10];
	char matricula[10];
	char nome[30];
	int arquivo[10];  
};

struct tfila{
	struct taluno dados[tam];
	int ini;
	int fim;
};
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
	if(fila.fim == tam){
 		printf("\n\n*************************** A FILA ESTÁ CHEIA! ************************\n\n");
		system("pause");
		} else{
			printf("Digite o RA DO ALUNO: ");
 			scanf("%s", fila.dados[fila.fim].ra);
 			printf("Digite o NOME DO ALUNO: ");
 			scanf("%s", fila.dados[fila.fim].nome);
 			fflush(stdin);
 			fflush(stdin);
 			printf("Digite a EXTENSÃO do arquivo: ");
 			scanf("%s", fila.dados[fila.fim].arquivo);
 			printf("Digite a MATRÍCULA do professor: ");
 			scanf("%s", fila.dados[fila.fim].matricula);
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

 		for (i = 0; i < tam; i++){
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
	printf("*********************************************** \n\n");
	for(i=0; i<tam; i++){
 	printf("RA do Aluno: %s\n", fila.dados[i].ra);
 	printf("NOME DO ALUNO: %s\n", fila.dados[i].nome);
	printf("EXTENSÃO DO ARQUIVO: %s\n", fila.dados[i].arquivo);
	printf("MATRÍCULA DO PROFESSOR: %s\n\n", fila.dados[i].matricula);
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
