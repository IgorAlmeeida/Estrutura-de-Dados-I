#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int *p;
    int *q;
    int *endP;
    int *endQ;

    x = 2;
    y = 8;

    p = &x;
    q = &y;

    endP = &p;
    endQ = &q;

    printf("Endereço de X: %d e Valor de X: %d\n", p, x);
    printf("Valor de P: %d e Valor de *P: %d\n", p, *p);
    printf("Endereço de Y: %d e Valor de Y: %d\n", q, y);
    printf("Valor de Q: %d e Valor de *Q: %d\n", q, *q);
    printf("Endereço de P: %d e Endereço de Q: %d\n", endP,endQ);



    return 0;
}
