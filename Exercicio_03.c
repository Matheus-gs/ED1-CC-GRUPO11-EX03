/*
Arquivo: Execicio_03.c

Exercício 03

Grupo 11

Matheus Gomes Santos - RGM: 26136805

Turma: N2
*/

#include <stdio.h>

#include "Lista.h"

int main(void){
	NoLista* lst;
	
	int tamanho;
	
	
	lst = lst_cria();
	
	lst = lst_insere_ordenado(lst, 23);
	lst = lst_insere_ordenado(lst, 59);
	lst = lst_insere_ordenado(lst, 64);
	lst = lst_insere_ordenado(lst, 83);
	lst = lst_insere_ordenado(lst, 93);

	lst_imprime(lst);
	
	tamanho = lst_tamanho(lst);
	printf("Sua lista possui %d itens!", tamanho);
	
	lst_libera(lst);
	
	return 0;
}
