#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas;
    int colunas;

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &colunas);

    float **matriz = (float** )malloc(linhas * sizeof(float* ));
    if (!matriz)
    {
        printf("ERRO!!!");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (float*)malloc(colunas * sizeof(float));
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Informe o valor de que ocuparar a posição [%d][%d]: ",i,j);
            scanf("%f", &matriz[i][j]);
        }        
    }

     for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("[%.2f]",matriz[i][j]);
        }        
        printf("\n");
    }

    

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}