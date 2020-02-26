#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamVetor, tamPrint, maior, menor, i = 0;
    int j, aux1, aux2;
    int *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamVetor);

    tamPrint = tamVetor;

    vet = malloc(tamVetor * sizeof(int));

    for (j = 0 ; j < tamVetor; j++){
        scanf("%d", &vet[j]);
    }
    int l = 0;

    while (l < tamPrint){
        maior = -2147483647;
        menor = 2147483647;
        if (l % 2 == 0){
            for (j = i ; j < tamVetor; j++){
                if (vet[j] > maior){
                    maior = vet[j];
                    printf("Maior = %d\n", maior);
                    aux1 = j;
                }
            }
            vet[aux1] = vet[i];
            vet[i] = maior;
            i++;
        }
        if (l % 2 != 0) {
            for (j = i ; j < tamVetor; j++){
                if (vet[j] < maior){
                    menor = vet[j];
                    printf("menor = %d\n", menor);
                    aux2 = j;
                }
            }
            vet[aux2] = vet[tamVetor-1];
            vet[tamVetor-1] = menor;
            tamVetor--;

        }
      l++;
    }

    for (int k = 0; k < tamPrint; k++){
        printf("%d - ", vet[k]);
    }

    free(vet);
    return 0;
}
