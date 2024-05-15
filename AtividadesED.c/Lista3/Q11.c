#include <stdio.h>
#include <stdlib.h>
int massa(int *c, int *h)
{
    int massa = 0;
    massa = (*c * 12) + (*h);
    return massa;
}

int main (){

    int *c = NULL,*h = NULL;


    c = (int *)malloc(1 * sizeof(int));
    h = (int *)malloc(1 * sizeof(int));
    printf("informe a qunatidad de carbonos:");
    scanf("%d",&c[0]);
    printf("informe a qunatidad de hidrogenios:");
    scanf("%d",&h[0]);

    printf("massa molar: %d",massa(c,h));

    free(c);
    free(h);
}