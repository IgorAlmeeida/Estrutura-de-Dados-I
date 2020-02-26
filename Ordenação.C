#include <stdio.h>
#include <stdlib.h>

void printVetor(int vet[], int tam){
	int i;

	printf("Vetor Ordenado:\n");
	for (i = 0; i < tam; i++){
		printf("%i\n",vet[i]);
	}
}

void bubbleSort(int vet[], int tam){
	int i, j, aux; 
	for (i = 0; i < tam; i++){
		for(j = 0; j < tam - 1; j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
	printVetor(vet, tam);
}
void selectionSort(int vet[], int tam){
	int i, j,index;
	int aux;
	for(i = 0; i < tam - 1; i++){
		index = i;
		for(j = i + 1; j < tam; j++){
			if(vet[j] < vet[i]){
				index = j;
			}
		}
		if(i != index){
			aux = vet[i];
			vet[i] = vet[index];
			vet[index] = aux;
		}
	}
	printVetor(vet, tam);
}

void insertionSort(int vet[], int tam){
	int i, j, aux,controle;
	for(i = 1; i < tam; i++){
		j = i - 1;
			while(j >= 0 && vet[j] > vet[i]){
				vet[j+1] = vet[j];
				j--;
			}
		vet[j+1] = vet[i]; 
	}
	printVetor(vet, tam);
}

int main(void)
{
	int vetor[10] = {1011,94,833,100,6,55,6,3,2,331};
	int tam = 10, i;

	int *vetctor2 = (int *) malloc(10 * sizeof(int));

	for (i = 0; i < 10; i++){
		vetctor2[i] = vetor[i];
	}

	bubbleSort(vetor, tam);
	selectionSort(vetor, tam);
	insertionSort(vetor, tam);

	return 0;
}
