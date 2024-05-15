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
            matriz[i][j] = rand() % 100;
        }
    }
}

void printar(float **matriz)
{

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
void somaEmedia(float **matriz, int *valor)
{
    float soma = 0;
    float media = 0;
   
        for (int j = 0; j < 12; j++)
        {
            soma += matriz[*valor][j];
        }
    media = soma / 12;
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
}

int main()
{
    int valor;
    printf("Digite a linha que deseja somar e calcular a media: ");
    scanf("%d", &valor);
    float **matriz = (float **)malloc(12 * sizeof(float *));
    for (int i = 0; i < 12; i++)
    {
        matriz[i] = (float *)malloc(12 * sizeof(float));
    };

    preexer(matriz);
    printar(matriz);
    somaEmedia(matriz, &valor);

    for (int i = 0; i < 12; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}