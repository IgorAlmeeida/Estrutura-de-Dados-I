#include <stdio.h>
#include <stdlib.h>

typedef struct listD listd;

struct listD {
	int numero;
	listd *prox;
	listd *ant;
};

listd * inicializarListaD(){
	listd *lista = (listd *) malloc(sizeof(listd));
	lista->prox = NULL;
	lista->ant = NULL;

	return lista;
}


void adcionarInicio(listd *l, int numeroAdd){
	listd * novoNo = (listd*) malloc(sizeof(listd));
	novoNo->numero = numeroAdd;
	novoNo->prox = l->prox;
	novoNo->ant = NULL;
	
	if(l->prox != NULL){
		l->prox->ant = novoNo;
	}
	l->prox = novoNo;
	printf("Elemento inserido com sucesso.\n");
}

void imprimirLista(listd * l){
	listd* p;
	for (p = l->prox; p !=NULL; p = p->prox){
		printf("%i\n\n",p->numero);
		}
		
}


void insertionSort (listd *l){
	int var = 0, cont = 0;
	listd *p, *q, *aux1, *aux2, *aux3;
	bool teste = false;
	bool teste2 = false;
	int cont2 = 0;
	aux3 = l->prox;

	while(aux3 != NULL){
		var++;
		aux3 = aux3->prox;
	}

	for(p = l->prox; p != NULL; p = p->prox){

		teste = false;
		if(p->prox != NULL){
			q = p->prox;
			aux1 = p;
			while(aux1->ant != NULL){
				if(aux1->numero > q->numero){
					aux1 = aux1->ant;
					printf("Aqui1\n");
				}
				else{
					q->prox->ant = q->ant;
					q->ant->prox = q->prox;
					aux1->prox->ant = q;
					q->prox = aux1->prox;
					q->ant = aux1;
					aux1->prox = q;
					teste = true;
					break;
					printf("Aqui2\n");
				}
			}
			/*if(teste == false){
				q->ant = NULL;
				q->prox = l->prox;
				l->prox = q;
				printf("Aqui3\n");*/
			//}

		}
		else{
			aux1 = p;
			aux2 = aux1->ant; 
			printf("Aqui4\n");
			while(aux1->ant !=NULL){
				if(aux1->numero < aux2->numero){
					aux2 = aux2->ant;
					cont++;
					printf("Aqui5\n");
				}
				else{
					if(cont != 0){
						aux1->ant->prox = NULL;
						aux2->prox->ant = aux1;
						aux1->prox = aux2->prox;
						aux1->ant = aux2;
						aux2->prox = aux1;
						teste2 = true;
						printf("Aqui6\n");
					}
				}

			}
			if(teste2 == false){
				printf("Aqui7\n");
				aux1->ant->prox = NULL;
				aux1->ant = NULL;
				aux1->prox = l->prox;
				l->prox = aux1;
			}

		}
		
	}


}


int main(void) {
	listd * inicio = inicializarListaD();
	adcionarInicio(inicio, 1);
	adcionarInicio(inicio, 1440);
	adcionarInicio(inicio, 0);
	adcionarInicio(inicio, 3040);
	adcionarInicio(inicio, 20440);	
	imprimirLista(inicio);


	insertionSort(inicio);
	imprimirLista(inicio);


	return 0;
}
