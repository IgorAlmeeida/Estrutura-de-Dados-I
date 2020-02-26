#include <stdio.h>
#include <stdlib.h>

typedef struct lista list;

struct lista
{
	int numero;
	list *proximo;
};

list* inicializar(){
	list * novoNo = (list*)malloc(sizeof(list));
	novoNo->proximo = NULL;
	return novoNo;
}

void addListaOrdenada(list *l, int num){
	list *p = l->proximo;
	list *ant = l;
	if (l->proximo == NULL){
		list *novoNo = (list*)malloc(sizeof(list));
		novoNo->numero = num;
		novoNo->proximo = NULL;
		l->proximo = novoNo;
	}
	else{
		while((p != NULL)&& (p->numero < num)){
			ant = p;
			p = p->proximo;
		}
		list *novoNo = (list*)malloc(sizeof(list));
		novoNo->numero = num;
		novoNo->proximo = ant->proximo;
		ant->proximo = novoNo;
	}
	
}

list * concatenarOrdenado(list *l1, list *l2){
	list *p = l1->proximo;
	list *q = l2->proximo;
	list *cocatenada = inicializar();
	while(p != NULL){
		addListaOrdenada(cocatenada, p->numero);
		p = p->proximo;
	}
	while(q != NULL){
		addListaOrdenada(cocatenada, q->numero);
		q = q->proximo;
	}
	return cocatenada;

}


void printar(list *l){
	list *p = l->proximo;
	while(p != NULL){
		printf("%i\n",p->numero);
		p = p->proximo;
	} 
}

int main(void)
{
	list *inicio1 = inicializar();
	list *inicio2 = inicializar();
	addListaOrdenada(inicio1, 15);
	addListaOrdenada(inicio1, 1);
	addListaOrdenada(inicio1, 7);
	addListaOrdenada(inicio1, 16);
	addListaOrdenada(inicio1, 10);
	printf("Lista 1 Ordenada\n");
	printar(inicio1);
	addListaOrdenada(inicio2, 100);
	addListaOrdenada(inicio2, 12);
	addListaOrdenada(inicio2, 5);
	addListaOrdenada(inicio2, 600);
	addListaOrdenada(inicio2, 2);
	addListaOrdenada(inicio2, 20);
	printf("Lista 2 Ordenada\n");
	printar(inicio2);
	printf("Lista 1 e 2 Concatenadas e Ordenadas\n");
	list*cocatenadaFinal = concatenarOrdenado(inicio1,inicio2);
	printar(cocatenadaFinal);


	return 0;
}
