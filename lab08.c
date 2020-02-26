#include <stdio.h>
#include <stdlib.h>

void Ordenar(int *vet, int tamanho){
	int aux;
	int i, j;
	for (i = 0; i < tamanho; i++){
		for (j = 0; j < tamanho; j++){
			if(vet[i] < vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
}

int retornoIndice(int *vet, int tamanho, int elemento){
	int i;
	int retorno;
	for(i = 0; i < tamanho; i++){
		if(vet[i] == elemento){
			retorno = i;
			break;
		}
	}
	return retorno;

}



int main(void){
	int numElemetos;
	int elemento;
	int *vet;
	int i = 0;

	printf("Numero de Elementos\n");
	scanf("%i", &numElemetos);
	printf("Elemento\n");
	scanf("%i", &elemento);

	printf("Vetor\n");

	vet = (int*) malloc(numElemetos*sizeof(int));
	for (i = 0; i < numElemetos; ++i)
	{
		scanf("%i", &vet[i]);
	}

	Ordenar(vet, numElemetos);
	printf("Indice: %i\n", retornoIndice(vet, numElemetos, elemento));

	return 0;
}
