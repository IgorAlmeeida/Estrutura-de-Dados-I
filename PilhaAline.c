#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

struct pilha
{
	float num;
	Pilha *prox;

};

Pilha* pilha_cria(void)
{
    
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prox = NULL;
    return p;
}

void inserirPinha (Pilha* p, float num){
	Pilha* novoNo =(Pilha*) malloc(sizeof(Pilha)) ;
	novoNo->num = num;
	novoNo->prox = p->prox;
	p->prox = novoNo;
}

float retiraPilha(Pilha* p){
	Pilha* q = p->prox;
	float retorno = q->num;
	p->prox = q->prox;
	free(q);
	return retorno;
}
void pilha_imprime(Pilha* p)
{
    Pilha* q;
    for(q=p->prox; q!=NULL; q=q->prox)
        printf("%f\n", q->num);
    
}
int main(void)
{
	Pilha *inicio = pilha_cria();
	Pilha *inicio2 = pilha_cria();

	inserirPinha(inicio, 2.1);
	inserirPinha(inicio, 3.1);
	inserirPinha(inicio, 4.1);
	inserirPinha(inicio2, 6.1);
	inserirPinha(inicio2, 7.1);
	inserirPinha(inicio2, 8.1);
	
	printf("Pilnha 1\n");
	pilha_imprime(inicio);
	printf("\nPilnha 2\n");
	pilha_imprime(inicio2);
	
	/*Pilha *aux = pilha_cria();
	
	Pilha *q = inicio2->prox;
	float aux2;
	
	while(q != NULL){
		aux2 = retiraPilha(inicio2);
		inserirPinha(aux, aux2);
		q = inicio2->prox;
	}
	q = aux->prox;
	
	printf("\nPilnha Aux\n");
	pilha_imprime(aux);
	
	while(q != NULL){
		aux2 = retiraPilha(aux);
		inserirPinha(inicio, aux2);
		q = aux->prox;
	}
	
	printf("\nPilnha 1 e 2\n");
	pilha_imprime(inicio);*/

	Pilha *q = inicio2->prox;
	while (q->prox != NULL){
		q = q->prox;
	}
	q->prox = inicio->prox;

	printf("\nPilnha 1 e 2\n");
	pilha_imprime(inicio2);


	return 0;
}
