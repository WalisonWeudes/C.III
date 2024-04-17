#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = (int *)malloc(1500 * sizeof(int));
    for (int i = 0; i < 1500; i++)
    {
        vetor[i] = i;
    }

    printf("primeiros 10 valores do vetor: [");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    printf("Ultimos 10 valores do vetor: [");
    int cont = 10;
    for (int i = 1500; cont > 0; i--)
    {
        printf("%d ", vetor[i - 1]);
        cont--;
    }
    printf("]");

    free(vetor);
    return 0;
}