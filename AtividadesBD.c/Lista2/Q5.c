#include <stdio.h>
#include <stdlib.h>
int *alocarVetor(int tamanho)
{
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (!*vetor)
    {
        printf("Erro!!");
        exit(EXIT_FAILURE);
    }
    return vetor;
}

void preexer(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o valor da posição [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}
void printarVetor(int *vetor, int tamanho)
{
    printf("Valores armazenados no vetor\n");
    printf("[");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("]");
    printf("\n");
}
int** criarMatriz(int tamanho1, int tamanho2)
{
    int **matriz = (int **)malloc(tamanho1 * sizeof(int *));
    if (!matriz)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < tamanho1; i++)
    {
        matriz[i] = (int *)malloc(tamanho2 * sizeof(int));
    }

    return matriz;
}
void somarvetores(int **matriz, int *vetor1, int *vetor2, int tamanho1, int tamanho2)
{
    for (int i = 0; i < tamanho1; i++)
    {
        for (int j = 0; j < tamanho2; j++)
        {
            matriz[i][j] = vetor1[i] * vetor2[j];
        }
    }

    printf("Valores armazenados na matriz\n");
    for (int i = 0; i < tamanho1; i++)
    {
        for (int j = 0; j < tamanho2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < tamanho1; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
int main()
{
    int t1;
    int t2;
    printf("Informe o tamanho do primeiro vetor: ");
    scanf("%d", &t1);
    printf("Informe o tamanho do segundo vetor: ");
    scanf("%d", &t2);
    int *vetor1 = alocarVetor(t1);
    if (!vetor1)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    int *vetor2 = alocarVetor(t2);
    if (!vetor2)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    printf("Preencha o primeiro vetor\n");
    preexer(vetor1, t1);
    printf("Preencha o segundo vetor\n");
    preexer(vetor2, t2);
    printf("Vetor 1\n");
    printarVetor(vetor1, t1);
    printf("Vetor 2\n");
    printarVetor(vetor2, t2);
    int **matriz = criarMatriz(t1, t2);
    somarvetores(matriz, vetor1, vetor2, t1, t2);

    free(vetor1);
    free(vetor2);

    return 0;
}