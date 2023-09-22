#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#define MAX 100
Pilha p;
char menuStr[][MAX]={
		"Inicializar",
		"Empilhar",
		"Desempilhar",
		"Listar",
		"Sair"
	};
void Listar(){
	int teste;
	int dado;
	Pilha tmp;
	criaPilha(&tmp);
	do{
		teste=desempilhaPilha(&p,&dado);
		if(teste){
			empilhaPilha(&tmp, dado);
			printf("%d\n", dado);
		}
	}while(teste);
	do{
		teste=desempilhaPilha(&tmp,&dado);
		if(teste)
			empilhaPilha(&p, dado);
	}while(teste);
}
void cmd(int op){
	int i;
	switch(op){
		case 1:
			criaPilha(&p);
			puts("Estrutura inicializada\n");
			break;
		case 2:
			printf("Entre com o numero a empilhar:");
			scanf("%d",&i);
			if(empilhaPilha(&p,i))
				printf("%d foi empilhado\n",i);
			else
				printf("Numero %d não foi empilhado\n", i );
			break;
		case 3:
			//desempilha
			if(Pilhavazia(p)){
				printf("Pilha vazia");
				break;
			}
				
			if(desempilhaPilha(&p, &i))
				printf("Desempilhou o %d\n", i);
			else
				printf("Não conseguiu empilhar %d\n", i );
			break;
		case 4:
			if(Pilhavazia(p)){
				printf("Pilha vazia");
				break;
			}
			Listar();
			//Listar
			break;
	}

}
int menu(){
	int i;
	puts("\n\nMenu:\n");
	for(i=0 ; i < sizeof(menuStr)/ MAX; i++)
		printf("%2.2d - %s\n",i+1,menuStr[i]);
	printf("\nOpcao:");
	scanf("%d", &i);
	return i;
	}
int main(){
	int i;
	do{
		i = menu();
		cmd(i);
	}while(i != (sizeof(menuStr) / MAX) );
	return SUCESS;
}
