#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int linha = 51, coluna = 51;
    int raio = linha / 2;
    int **matriz = (int **)malloc(linha * sizeof(int *));

    for (int i = 0; i < linha; i++)
    {
        matriz[i] = (int *)malloc(coluna * sizeof(int));
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (sqrt(pow(i - linha / 2, 2) + pow(j - coluna / 2, 2)) <= raio)
            {
                matriz[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < linha; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}