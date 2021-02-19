#include <stdio.h>
#include <string.h>

#include "professor.h"

#define TMH 2

professor database_professores[TMH];
int controlador = 0;

int quantidade_professores(){
	return controlador;
}

professor* obter_lista_professores(){
	return database_professores;
}

boolean possuiEspacoProfessor(){
	if(controlador >= TMH){
		return falso;
	}else{
		return verdadeiro;
	}
}

void cadastrar_professor(){
	system("cls");
	
	if(possuiEspacoProfessor() == verdadeiro){
		printf("\nCPF:");
		gets(database_professores[controlador].cpf);
		fflush(stdin);
		
		printf("\nNome:");
		gets(database_professores[controlador].nome);
		fflush(stdin);
		
		printf("\nSalario:");
		scanf("%f",&database_professores[controlador].salario);
		fflush(stdin);
		controlador++;	
	}else{
		printf("\nMemoria de armazenamento de professores insuficiente!\n");
		system("pause");
	}	
}

void consultar_professor(char cpf_tmp[15]){
	int cont;
	system("cls");
	
	for(cont=0; cont < controlador; cont++){
		if(strcmp(database_professores[cont].cpf,cpf_tmp) == 0 ){
			
		printf("\nCPF: %s", database_professores[cont].cpf);
		printf("\nNome: %s", database_professores[cont].nome);
		printf("\nSalario: %.2f \n", database_professores[cont].salario);
		system("pause");
		break;
		}
	}
	if(cont == controlador){
		printf("\nO professor com CPF %s nao existe! \n",cpf_tmp);
		system("pause");
		}
}

void alterar_professor(char cpf_alt[15]){
	int cont;
	system("cls");
	
	for(cont=0; cont < controlador; cont++){
		if(strcmp(database_professores[cont].cpf,cpf_alt) == 0 ){			
			printf("\nCPF: %s", database_professores[cont].cpf);
			printf("\nNome: %s", database_professores[cont].nome);
			printf("\nSalario: %.2f \n", database_professores[cont].salario);
			system("pause");
			break;
			}
		}
		if(cont == controlador){
			printf("\nO professor com CPF %s nao existe! \n",cpf_alt);
			system("pause");
		}
	
	char SN[1];
	printf("\n\nConfirmar alteracao [S / N] >> ");
	gets(SN);
	
	if(SN == 'S'){
		database_professores[cont] = 0;
		cadastrar_professor();
	}		
}

void excluir_professor(char cpf_ex){
	int cont;
	system("cls");
	
	for(cont=0; cont < controlador; cont++){
		if(strcmp(database_professores[cont].cpf, cpf_ex) == 0){
			printf("\nCPF: %s", database_professores[cont].cpf);
			printf("\nNome: %s", database_professores[cont].nome);
			printf("\nSalario: %.2f \n", database_professores[cont].salario);
			system("pause");
			break;	
		}
		if(cont == controlador){
			printf("\nO professor com CPF %s nao existe! \n",cpf_ex);
			system("pause");
		}
	}
	
	char SN[1];
	printf("\n\nTem certeza que quer excluir? [S / N] >> ");
	gets(SN);
	
	if(SN == 'S'){
		cpf_ex = database_professores[controlador];
		cpf_ex = 0;
	}	
}
