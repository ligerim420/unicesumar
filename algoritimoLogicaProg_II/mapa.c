#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define SIZE 5
char nome[SIZE][50];
char email[SIZE][50];
char telefone[SIZE][20];
int codigo[SIZE];
int op;
static int linha;
void cadastro();
void pesquisa();
void listar();

int main(void){
	setlocale(LC_ALL, "portuguese");

	do{
	    system("cls");
	    system("color 9e");
    	printf("\n  #------------------CADASTRO DE CLIENTES------------------#   ");
    	printf("\n  |                                                        |   ");
   		printf("\n  |                                                        |   ");
   		printf("\n  |                     MENU PRINCIPAL                     |   ");
    	printf("\n  |                                                        |   ");
    	printf("\n  |                1 - Cadastrar                           |   ");
    	printf("\n  |                2 - Listar Todos                        |   ");
    	printf("\n  |                0 - Sair                                |   ");
    	printf("\n  |                                                        |   ");
    	printf("\n  |                                                        |   ");
    	printf("\n  |       Programador:                                     |   ");
    	printf("\n  |              Lucas Almeida de Oliveira                 |   ");
    	printf("\n  |                                                        |   ");
    	printf("\n  #--------------------------------------------------------#   ");
    	printf("\n\n       >Escolha uma opção:   ");
    	scanf("%d", &op);
        	switch(op){
    		case 1:
    			cadastro();
    			break;
    		case 2: 
				listar();
				system("\npause");
				break;
			case 0:
				system("exit");
				break;		
			default:
				printf("\n [!] Opção inválida! \n" );
				system("\npause");	
    		}
		
	}while(op!=0);
}
	//Inicio da Função listar!!
void listar(){
	int i;
		system("cls");
	    printf("\n  #--------------------------------------------------------------#   ");
        printf("\n  |                       LISTA DE CADASTRO                      |   ");
        printf("\n  #--------------------------------------------------------------#   ");
        
		
		for(i=0;linha==0;i++){
			printf("\n [!] Agenda Vazia! \n");
			return(0);	
	}
	
	for(i=0;i<SIZE;i++){
		if(codigo[i]>0){
				printf("\n------------------------------------\n >Nome: %s >E-mail:%s \n >Telefone:%s >Código:%d\n", nome[i], email[i], telefone[i], codigo[i]);
		}

		
	}
}
	//Fim da função listar!!
	//Inicio da função cadastro!!
void cadastro(){
	int i;
	int o;
	do{
		
		
					
	    system("cls");
        printf("\n  #--------------------------------------------------------------#   ");
        printf("\n  |                         CADASTRO                             |   ");
        printf("\n  #--------------------------------------------------------------#   ");
  		
  		
  			for(i=0;linha>=5;i++){
					printf("\n [!] Agenda Cheia! \n");
					system("\n pause \n");
					return(0);
				}
				
		   codigo[linha] = linha +1;
		   
		fflush(stdin);
		printf("\n >Digite o nome:");
		fgets(nome[linha], 50, stdin);
		fflush(stdin);
		printf("\n >Digite o email: ");
		scanf("%s", &email[linha]);
		fflush(stdin);
		fflush(stdin);
		printf("\n >Digite o telefone: ");
		fgets(telefone[linha], 20, stdin);
		printf("\n >Digite 1 para continuar ou 2 para sair: ");
		scanf("%d", &op);
		fflush(stdin);
		linha++;
		
	
		
		
	}while(op==1);
}






