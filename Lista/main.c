#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    int tamanhoVet;

    printf("Insira a quantidade de elementos do vetor: ");
    scanf("%i", &tamanhoVet);

    vet = malloc(tamanhoVet * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < tamanhoVet; i++){
        scanf("%i", &vet[i]);
    }

    int var = 0;

    for (int i = 0; i < tamanhoVet; i++){
        if (i % 2 == 0){
            for (int j = 0; j < tamanhoVet; j++){
                if (vet[i] < vet[j]){
                    var = vet[i];
                    vet[i] = vet[j];
                    vet[j] = var;
                }
            }
        }
        else {
            for (int j = tamanhoVet - 1 ; j >= 0; j--){
                if (vet[i] > vet[j]){
                    var = vet[j];
                    vet[j] = vet[i];
                    vet[i] = var;

                }
            }
        }
    }
    for (int k = 0; k < tamanhoVet; k++){
        printf(" %d ", vet[k]);
    }

    free(vet);
    exit(1);
    return 0;
}
