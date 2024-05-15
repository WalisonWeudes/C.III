#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double **alocaMatriz(int *m, int *n)
{
    double **matriz;
    matriz = (double **)malloc(*m * sizeof(double *));

    if (matriz == NULL)
    {
        printf("Erro!!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *m; i++)
    {
        matriz[i] = (double *)malloc(*n * sizeof(double));
        if (matriz[i] == NULL)
        {
            printf("Erro!!");
            exit(EXIT_FAILURE);
        }
    }

    return matriz;
}

double **preexer(double **matriz, int linhas, int colunas)
{
    srand(time(NULL));
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 50 + 1;
        }
    }
    return matriz;
}

double **printar(double **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        printf("[");
        for (int j = 0; j < colunas; j++)
        {
            printf("%2.f ", matriz[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return matriz;
}

double somar(double **aux, double **matriz1, double **matriz2, int linhas, int colunas)
{

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            aux[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return **aux;
}

void liberaMemoria(double **matriz, int *m)
{
    for (int i = 0; i < *m; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int main()
{
    int linhas;
    int colunas;
    printf("Isso valerar para as duas matrizezs!!!\n");
    printf("Informe o tamanho a quantidades de linhas: ");
    scanf("%d", &linhas);
    printf("Informe o tamanho a quantidades de colunas: ");
    scanf("%d", &colunas);

    double **matriz1 = alocaMatriz(&linhas, &colunas);
    double **matriz2 = alocaMatriz(&linhas, &colunas);
    double **soma = alocaMatriz(&linhas, &colunas);
    preexer(matriz1, linhas, colunas);
    preexer(matriz2, linhas, colunas);
    printf("PRIMEIRA MATRIZ\n");
    printar(matriz1, linhas, colunas);
    printf("SEGUNDA MATRIZ\n");
    printar(matriz2, linhas, colunas);
    printf("SOMA MATRIZES\n");
    somar(soma, matriz1, matriz2, linhas, colunas);
    printar(soma, linhas, colunas);
    liberaMemoria(matriz1, &linhas);
    liberaMemoria(matriz2, &linhas);
    liberaMemoria(soma, &linhas);

    return 0;
}