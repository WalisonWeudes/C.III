#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preexer(float **matriz)
{

    srand(time(NULL));
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
}
void printar(float **matriz)
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%2.f", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void SomaMedia(float **matriz, int *coluna)
{
    float soma = 0;
    for (int i = 0; i < 12; i++)
    {
        soma += matriz[i][*coluna];
    }
    float media = soma / 12;

    printf("Soma = %2.f\n", soma);
    printf("Media = %2.f", media);
}

int main()
{
    int valor;
    printf("indorme a posição da coluna: ");
    scanf("%d", &valor);

    float **matriz = (float **)malloc(12 * sizeof(float *));
    for (int i = 0; i < 12; i++)
    {
        matriz[i] = (float *)malloc(12 * sizeof(float));
    }
    if(!matriz){
        printf("O alocamento não funcionou!!!");
        exit;
    }
    preexer(matriz);
    printar(matriz);
    SomaMedia(matriz, &valor);

    for (int i = 0; i < 12; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}