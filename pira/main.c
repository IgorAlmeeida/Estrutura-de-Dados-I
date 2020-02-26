#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int aux;

    scanf("%d",&n);

    if (n == 3){
        aux = 1;
    }
    else if (n == 4){
        aux = 2;
    }
    else{
        aux = (n/2) + 1;
    }
    printf("%d\n", aux);
    return 0;
}
