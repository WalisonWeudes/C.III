#include <stdio.h>
#include <stdlib.h>

void printar(int *vetor, int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        printf("[");
        printf("%d ", vetor[i]);
        printf("]");
    }
}

void novovetor(int *vetor, int inicio, int fim, int tamanho)
{
    int *novovetor = NULL;
    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > inicio && vetor[i] < fim)
        {
            contador++;
            novovetor = (int *)realloc(novovetor, contador * sizeof(int));
            if (!novovetor)
            {
                printf("ERRO!!");
                exit(EXIT_FAILURE);
            }
            novovetor[contador - 1] = vetor[i];


        }
    }
    printf("Numeros entre %d e %d\n", inicio,fim);

    printar(novovetor, contador);

    free(novovetor);
}

int main()
{
    int vetor[100];
    int inicio;
    int fim;
    int tamanho;

    printf("informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor da posição [%d]:", i);
        scanf("%d", &vetor[i]);
    }
    printf("Voce deseja buscar os numeros entre\n");
    printf("primeiro numero: ");
    scanf("%d", &inicio);
    printf("ultimo numero: ");
    scanf("%d", &fim);
    novovetor(vetor, inicio, fim, tamanho);

    return 0;
}