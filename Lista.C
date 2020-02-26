#include <stdio.h>
#include <stdlib.h>

typedef struct ListaNo cabeca;
typedef struct Lista list;

struct ListaNo {
	list * primeiro;
};

struct Lista {
	int numero;
	list * priximaLista;
};

cabeca* inicializarLista(void){
	cabeca * novoNo = (cabeca*) malloc(sizeof(cabeca)); 
	novoNo -> primeiro = NULL;
	printf("Lista Inicializada.\n");
	return novoNo;
}

void adcionarInicio(cabeca *l, int numeroAdd){
	list * novoNo = (list*) malloc(sizeof(list));
	novoNo->numero = numeroAdd;
	novoNo->priximaLista = l->primeiro;
	l-> primeiro = novoNo;
	printf("Elemento inserido com sucesso.\n");
}

void imprimirLista(cabeca * l){
	list* p;
	for (p = l->primeiro; p !=NULL; p = p->priximaLista){
		printf("%i\n",p->numero);
	}
}

void adcionarFinal(cabeca *l, int numeroAdd){
	list *p;
	p = l->primeiro;
	
	while(p->priximaLista != NULL){
		p = p->priximaLista;
	}
	
	if (p->priximaLista == NULL){
		list * novoNo = (list*) malloc(sizeof(list));
		novoNo->numero = numeroAdd;
		novoNo->priximaLista = NULL;
		p->priximaLista = novoNo;
	}

}

void adcionaElementoOrdenado(cabeca* l, int numeroAdd){
    list* novo;
    list* ant = NULL;
    list* p = l->primeiro;
    
    while (p != NULL && p ->numero < numeroAdd){
        ant = p;
        p = p->priximaLista;
    }
    
    if(ant == NULL){
		adcionarInicio(l, numeroAdd);
    }
    else{
    	list * novoNo = (list*) malloc(sizeof(list));
        novoNo->priximaLista = ant->priximaLista;
        novoNo->numero = numeroAdd;
        ant->priximaLista = novoNo;
    }
}


int main(void)
{
	cabeca * inicio = inicializarLista();
	adcionaElementoOrdenado(inicio, 10);
	adcionaElementoOrdenado(inicio, 5);
	adcionaElementoOrdenado(inicio, 110);
	adcionaElementoOrdenado(inicio, 100);
	imprimirLista(inicio);

	

	return 0;
}



