#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar(int **matriz, int m, int n)
{
    srand(time(NULL));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 50 + 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transpor(int **matriz, int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n;
    printf("informe o valor de m:");
    scanf("%d", &m);
    printf("informe o valor de n:");
    scanf("%d", &n);
    int **matriz = (int **)malloc(m * sizeof(int *));
    if (!matriz)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < m; i++)
    {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }
    printf("matriz normal\n");
    gerar(matriz, m, n);
    printf("matriz transposta\n");
    transpor(matriz, m, n);

    for (int i = 0; i < m; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}