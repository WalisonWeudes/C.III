#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerador(int *vetor, int quant)
{

    srand(time(NULL));
    for (int i = 0; i < quant; i++)
    {
        vetor[i] = rand() % (quant + 1) + 1;
    }
    for (int i = 0; i < quant; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void contador(int *vetor, int quant)
{

    int *contarvezes = (int *)malloc(quant * sizeof(int));
    if (!contarvezes)
    {
        printf("Alocação deu errado");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < quant; i++)
    {
        contarvezes[i] = 0;
    }

    for (int i = 0; i < quant; i++)
    {

        for (int j = 0; j < quant; j++)
        {
            if (i + 1 == vetor[j])
            {

                contarvezes[i]++;
            }
        }
    }

    for (int i = 0; i < quant; i++)
    {
        printf("O número %d aparece %d vezes\n", i + 1, contarvezes[i]);
    }

    free(contarvezes);
}

int main()
{
    int quant;
    printf("informe qquantos lados tem seu dado: ");
    scanf("%d", &quant);

    int *vetor = (int *)malloc(quant * sizeof(int));
    if (!vetor)
    {
        printf("Alocação deu errado");
        exit(EXIT_FAILURE);
    }

    gerador(vetor, quant);
    contador(vetor, quant);

    free(vetor);

    return 0;
}