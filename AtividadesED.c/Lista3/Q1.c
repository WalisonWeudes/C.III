#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **alocarMatriz(int tamanho)
{

    int **matriz = (int **)malloc(tamanho * sizeof(int *));
    for (int i = 0; i < tamanho; i++)
    {
        matriz[i] = (int *)malloc(tamanho * sizeof(int));
    }

    return matriz;
}

void preexer(int **matriz, int tamanho)
{
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            matriz[i][j] = rand() % 50 + 1;
        }
    }
}


void printar(int **matriz, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d, ",matriz[i][j]);
        }
        printf("\n");
    }
        printf("\n");
}


void libera(int **matriz, int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

void soma(int **matriz1, int **matriz2, int tamanho)
{
    int** soma = alocarMatriz(tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
           soma[i][j] =  matriz1[i][j] + matriz2[i][j];
        }
    }
        printf("SOMA:\n");
        printar(soma,tamanho);
        libera(soma,tamanho);
}
void somaGeral(int **matriz1, int **matriz2, int tamanho){

    int soma1= 0;
    int soma2= 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            soma1+=matriz1[i][j];
            soma2+=matriz2[i][j];
        }
        
    }
    printf("primeira: %d\n",soma1);
    printf("segunda: %d\n",soma2);

    printf("A soma das duas matrozes e: %d",soma1 + soma2);
}
int main()
{
    int tamanho = 5;

    int** matriz1 = alocarMatriz(tamanho);
    int** matriz2 = alocarMatriz(tamanho);
    
    preexer(matriz1,tamanho);
    printf("Matriz 1\n");
    printar(matriz1,tamanho);
    preexer(matriz2,tamanho);
    printf("Matriz 2\n");
    printar(matriz2,tamanho);
    soma(matriz1,matriz2,tamanho);
    somaGeral(matriz1,matriz2,tamanho);
    


    libera(matriz1,tamanho);
    libera(matriz2,tamanho);

    return 0;
}