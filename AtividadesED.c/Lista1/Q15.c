#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *sorteaValore()
{
    srand(time(NULL));
    int *vetorSorte = (int *)malloc(20 * sizeof(int));
    if (!vetorSorte)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 20; i++)
    {
        vetorSorte[i] = rand() % 100 + 1;
    }
    printf("VAlORES SORTEADOS:\n");
    printf("[");
    for (int i = 0; i < 20; i++)
    {
        printf("%d, ", vetorSorte[i]);
    }
    printf("]\n");

    return vetorSorte;
    free(vetorSorte);
}
int *lerAposta()
{

    int *aposta = (int *)malloc(20 * sizeof(int));
    if (!aposta)
    {
        printf("ERRRO!!!");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("Informe o %d valor:", i + 1);
        scanf("%d", &aposta[i]);
    }

    return aposta;
    free(aposta);
}
void comparar()
{
    int *aposta = lerAposta();
    int *valorsoateado = sorteaValore();
    printf("Valores iguais [");
    for (int i = 0; i < 20; i++)
    {
        int contador = 0;
        for (int j = 0; j < 20; j++)
        {
            if (aposta[i] == valorsoateado[j])
            {
                contador++;

                if (contador == 1)
                {
                    printf("%d, ", aposta[i]);
                }
            }
        }
    }
    printf("]");
}
int main()
{
    comparar();

    return 0;
}