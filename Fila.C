#include <stdio.h>
#include <stdlib.h>

typedef struct PilhaNo cabeca;
typedef struct Pilha little;

struct PilhaNo {
	little * primeiro;
};

struct Pilha {
	int numero;
	little * priximaLista;
};

cabeca* inicializarLista(void){
	cabeca * novoNo = (cabeca*) malloc(sizeof(cabeca)); 
	novoNo -> primeiro = NULL;
	printf("Lista Inicializada.\n");
	return novoNo;
}

void adcionarPilha(cabeca *l, int numeroAdd){
	little * novoNo = (little*) malloc(sizeof(little));
	novoNo->numero = numeroAdd;
	novoNo->priximaLista = l->primeiro;
	l-> primeiro = novoNo;
	printf("Elemento inserido com sucesso.\n");
}

void removerPilha(cabeca *l){
	little *p = l->primeiro;
	l->primeiro = p->priximaLista;
	free(p);
}

void imprimirLista(cabeca * l){
	little* p;
	for (p = l->primeiro; p !=NULL; p = p->priximaLista){
		printf("%i\n",p->numero);
	}
}

typedef struct FilaNo cabecaFila;
typedef struct Fila fila;

struct FilaNo {
	fila * primeiro;	
};

struct Fila {
	char nomeAluno[50];
	cabeca * notasAlunos; 
	fila * priximaLista;
};

cabecaFila* inicializarFila(void){
	cabecaFila * novoNo = (cabecaFila*) malloc(sizeof(cabecaFila)); 
	novoNo -> primeiro = NULL;
	printf("Lista Inicializada.\n");
	return novoNo;
}

void adcionarFinalFila(cabecaFila *l, int numeroAdd){
	fila *p;
	p = l->primeiro;
	
	while(p->priximaLista != NULL){
		p = p->priximaLista;
	}
	
	if (p->priximaLista == NULL){
		fila * novoNo = (fila*) malloc(sizeof(fila));
		novoNo->numero = numeroAdd;
		novoNo->priximaLista = NULL;
		p->priximaLista = novoNo;
	}

}
void removerFilaInicio(cabecaFila *l){
	fila *p = l->primeiro;
	l->primeiro = priximaLista;
	free(p);
}

//-----------------------------------------------------------xxx-------------------------------------------xxx-------------------

