#include <stdio.h>
#include <stdlib.h>

int *terceiroVetor(int *vetor1, int *vetor2, int tamanho1, int tamanho2, int tamanho3)
{

    int *vetor3 = (int *)malloc(tamanho3 * sizeof(int));
    if (!vetor3)
    {
        printf("ERROO!!!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho1; i++)
    {
        vetor3[i] = vetor1[i];
    }
    for (int i = 0; i < tamanho2; i++)
    {

        vetor3[tamanho1-1] = vetor2[i];
        tamanho1++;
    }

    return vetor3;

    free(vetor3);
}

int main()
{
    int *vetor1 = NULL;
    int *vetor2 = NULL;
    int contador1 = 0, op, contador2 = 0;
    printf("Caso queira sair digite algum numero negativo!!\n");
    do
    {
        printf("Informe o valor da posição [%d] do primeiro vetor:", contador1);
        scanf("%d", &op);
        contador1++;
        vetor1 = (int *)realloc(vetor1, contador1 * sizeof(int));
        if (!vetor1)
        {
            printf("ERRO!!!!");
            exit(EXIT_FAILURE);
        }
        if (op > 0)
        {
            vetor1[contador1 - 1] = op;
        }

    } while (op > 0);

    do
    {
        printf("Informe o valor da posição [%d] do segundo vetor:", contador2);
        scanf("%d", &op);
        contador2++;
        vetor2 = (int *)realloc(vetor2, contador2 * sizeof(int));
        if (!vetor2)
        {
            printf("ERRO!!!!");
            exit(EXIT_FAILURE);
        }
        if (op > 0)
        {
            vetor2[contador2 - 1] = op;
        }

    } while (op > 0);

    int contador3 = (contador1 + contador2) - 2;

    int *vetor3 = terceiroVetor(vetor1, vetor2, contador1, contador2, contador3);

    printf("[");
    for (int i = 0; i < contador3; i++)
    {
        printf("%d ", vetor3[i]);
    }
    printf("]");

    free(vetor1);
    free(vetor2);
    return 0;
}