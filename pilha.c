#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int criaPilha(Pilha *p){
	*p=NULL;
	return SUCESS;
}
int Pilhavazia(Pilha p){
	return (p == NULL);
}
int topoPilha(Pilha p, int *dado){
	if(!p)
		return ERROR;
	*dado = p->dado;
	return SUCESS;
}
int empilhaPilha(Pilha *p, int dado){
	Elemento *tmp =(Elemento *) malloc(sizeof(Elemento));
	if(!tmp)
		return ERROR;
	tmp->dado = dado;
	tmp->prox = (*p);
	*p= tmp;
	return SUCESS;
}
int desempilhaPilha(Pilha *p, int *dado){
	Elemento *tmp;
	if(Pilhavazia(*p)){
		return ERROR;
	}
	*dado = (*p)->dado;
	tmp= (*p)->prox;
	free(*p);
	*p = tmp;
	return SUCESS;
}



