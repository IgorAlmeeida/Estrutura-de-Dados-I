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

    printf("Endere�o de X: %d e Valor de X: %d\n", p, x);
    printf("Valor de P: %d e Valor de *P: %d\n", p, *p);
    printf("Endere�o de Y: %d e Valor de Y: %d\n", q, y);
    printf("Valor de Q: %d e Valor de *Q: %d\n", q, *q);
    printf("Endere�o de P: %d e Endere�o de Q: %d\n", endP,endQ);



    return 0;
}
