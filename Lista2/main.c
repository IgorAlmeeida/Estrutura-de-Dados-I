#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamVetor, i, j, k, l, tamVetor2;
    int *vet;
    int maior, menor, tamPrint;

    scanf("%d", &tamVetor);

    tamPrint = tamVetor;
    tamVetor2 = tamVetor;

    vet = malloc(tamVetor * sizeof(int));

    for(i = 0; i < tamVetor; i++){
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < tamPrint; i++){
        printf("1 - %d - ", vet[i]);
    }
    printf("\n");

    for (i = 0; i < tamVetor; i++){
        maior = -2147483647;
        menor = 2147483646;
        for (j = i; j < tamVetor; j++){
            if (vet[j] < menor){
                menor = vet[j];
                k = j;
            }
            if (vet[j] > maior){
                maior = vet[j];
                l = j;
            }
        }
        printf("\n");
        for (int k = 0; k < tamPrint; k++){
            printf("2 - %d - ", vet[k]);
        }
        vet[l] = vet[i];
        vet[i] = maior;
        vet[k] = vet[j];
        vet[j] = menor;
        tamVetor = tamVetor - 1;

        printf("\n");

        for (int k = 0; k < tamPrint; k++){
        printf("3 - %d - ",i, vet[k]);
    }
    }
    printf("\n");
    for (i = 0; i < tamPrint; i++){
        printf("%d - ", vet[i]);
    }

    free(vet);
}
