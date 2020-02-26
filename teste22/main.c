#include <stdio.h>
#include <stdlib.h>

void subtracao (int m, int n ,int** mat1[][n], int** mat2[][n]){
    int i,j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\n%d\n",mat1[i][j]-mat2[i][j]);
        }
    }


}

int main()
{
    int m,n,i,j;
    int **matriz1;
    int **matriz2;

    scanf("%d %d",&m, &n);

    matriz1 = (int**) malloc(m*sizeof(int));
    matriz2 = (int**) malloc(m*sizeof(int));

    for(i = 0; i < m; i++){
        matriz1 = (int*) malloc(n*sizeof(int));
        matriz2 = (int*) malloc(n*sizeof(int));
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }


    subtracao(m,n,**matriz1,**matriz2);

    return 0;
}
