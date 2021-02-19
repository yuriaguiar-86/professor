#include <stdio.h>

#include "professor.h"
#include "financeiro.h"

float calcular_folha_pagamento(int qtd_professores, professor *bd){
	int cont;
	float total = 0;
	
	for(cont=0; cont < qtd_professores; cont++){
		total += bd[cont].salario;
	}
	
	return 	total;	
}
