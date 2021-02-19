#include <stdio.h>
#include <stdlib.h>

#include "professor.h"
#include "financeiro.h"

int main(int argc, char *argv[]) {
	int opcao;
	char cpf[15];
	float total_folha_pagamento;
	
	printf("\nSEJA BEM-VINDO!");
	
	do{
		system("cls");
		
		printf("\n[01] - Cadastrar professor");
		printf("\n[02] - Consultar professor");
		printf("\n[03] - Alterar professor");
		printf("\n[04] - Excluir professor");
		printf("\n[05] - Folha de pagamento");
		printf("\n[06] - Sair");
		
		printf("\nEscolha uma opcao --> ");
		scanf("%d",&opcao);
		fflush(stdin);
		
		switch(opcao){
			case 1:
				cadastrar_professor();
				break;
			case 2:
				printf("\nInforme o CPF do professor: ");
				gets(cpf);
				fflush(stdin);
				consultar_professor(cpf);
				break;
			case 3:
				Prinft("\nInforme o CPF do professor: ");
				gets(cpf);
				fflush(stdin);
				alterar_professor(cpf);
				break;
			case 4:
				Prinft("\nInforme o CPF do professor: ");
				gets(cpf);
				fflush(stdin);
				excluir_professor(cpf);
				break;
			case 5:
				total_folha_pagamento = calcular_folha_pagamento(quantidade_professores(), obter_lista_professores());
				printf("\nO valor da folha de pagamento e %.2f \n", total_folha_pagamento);
				system("pause");
			case 6:
				printf("\nFinalizando.... \n");
				break;
			default:
				printf("\nOpcao invalida! \n");
				system("pause");
				break;
		}
		
	}while(opcao != 6);
	
	return 0;
}
