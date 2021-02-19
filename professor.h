#include <stdio.h>
#include <string.h>

#define boolean    int
#define verdadeiro 1
#define falso      0


typedef struct{
	char cpf[15];
	char nome[50];
	float salario;
}professor;

boolean possuiEspacoProfessor();

void cadastrar_professor();

void consultar_professor(char cpf_tmp[15]);

void alterar_professor(char cpf_alt[15]);

void excluir_professor(char cpf_ex[15]);

int quantidade_professores();

professor* obter_lista_professores();
