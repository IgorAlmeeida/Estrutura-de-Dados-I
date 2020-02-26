#include <stdio.h>
#include <stdlib.h>


void subtracao (int n, int m ,int **mat1, int **mat2){
    int i,j;
    int var;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
        	var = (mat1[i][j])-(mat2[i][j]);
            printf("\n%d\n",var);
        }
    }


}

int main()
{
    int m,i,j;
    int n;
    int **matriz1;
    int **matriz2;

    scanf("%d %d",&m, &n);

    matriz1 = (int**) malloc(m*sizeof(int*));
    matriz2 = (int**) malloc(m*sizeof(int*));

    for(i = 0; i < m; i++){
        matriz1[i] = (int*) malloc(n*sizeof(int));
        matriz2[i] = (int*) malloc(n*sizeof(int));
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


    subtracao(n,m,matriz1,matriz2);
    
    free(matriz1);
    free(matriz2);

    return 0;
    
    
}

