#ifndef PILHA
#define PILHA
#define SUCESS 1
#define ERROR 0 
typedef struct Elemento{
	int dado;
	struct Elemento *prox;
}Elemento;

typedef Elemento *Pilha;

int criaPilha(Pilha *p);
int Pilhavazia(Pilha p);
int topoPilha(Pilha p, int *dado);
int empilhaPilha(Pilha *p, int dado);
int desempilhaPilha(Pilha *p, int *dado);
#endif
