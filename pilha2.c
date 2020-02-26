#include <stdio.h>
#include <stdlib.h>

struct lista{
    
    float info;
    struct lista* prox;
    
};

typedef struct lista Pilha;

struct pilha{
    Lista* prim;
}

Pilha* pilha_cria(void)
{
    
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_inserir (Pilha* p, float valor)
{
    Lista* n = (Lista*) malloc (sizeof(Lista));
    n->info = valor;
    n->prox = p->prim;
    p->prim = n;
    
}

float pilha_remove(Pilha* p)
{
    Lista* t;
    float valor;
    if(p->prim == NULL){
        printf("Pilha vazia.\n");
        exit(1);
    }
    t = p->prim;
    valor = t->info;
    p->prim = t->prox;
    free(t);
    return valor;
    
}

void pilha_imprime(Pilha* p)
{
    Lista* q;
    for(q=p->prim; q!=NULL; q=q->prox)
        printf("%f\n", q->info);
    
}

Pilha inicio = pilha_cria();
pilha_inserir (inicio, 1);
pilha_inserir (inicio, 2);
pilha_inserir (inicio, 3);
pilha_remove(inicio);
pilha_remove(inicio);


