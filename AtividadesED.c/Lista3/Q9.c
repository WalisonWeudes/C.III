#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar(int *vetor, int m)
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        vetor[i] = rand() % 50 + 1;
    }

    for (int i = 0; i < m; i++)
    {

        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void transpor(int *vetor, int m)
{
    printf("%d \n", vetor[(m / 2)]);
    int iniciar = (m/2)- 1;
    for (int i = iniciar; i>= 0; i--)
    {
        printf("%d ", vetor[i]);
        printf("%d ", vetor[(m - 1) - i]);
        printf("\n");
    }
}
int main()
{
    int m;
    printf("informe o valor de m:");
    scanf("%d", &m);

    int *vetor = (int *)malloc(m * sizeof(int));
    if (!vetor)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }

    printf("matriz normal\n");
    gerar(vetor, m);
    printf("matriz transposta\n");
    transpor(vetor, m);

    free(vetor);
}