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

int main(void)
{
	cabeca * inicio = inicializarLista();
	adcionarPilha(inicio, 10);
	adcionarPilha(inicio, 5);
	adcionarPilha(inicio, 110);
	imprimirLista(inicio);
	printf("\n");
	removerPilha(inicio);
	imprimirLista(inicio);
	printf("\n");
	removerPilha(inicio);
	imprimirLista(inicio);

	return 0;
}
