#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criarvetor(int *tamanho)
{
    int *vetor = (int *)malloc(*tamanho * sizeof(int));
    if (!vetor) {
        printf("Erro!!");
        exit(EXIT_FAILURE);
    }

    return vetor;
}

void preenxer(int *vetor, int *tamanho)
{
    srand(time(NULL));
    for (int i = 0; i < *tamanho; i++)
    {
        vetor[i] = rand() % 100 + 1;
    }
}
void iprimir(int *vetor, int *tamanho)
{

    printf("Valores armazenados no vetor [");
    for (int i = 0; i < *tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
    printf("]");
}

void limpar(int *vetor){

    return free(vetor);
}

int main()
{

    int t;
    printf("informe o tamanho do vetor: ");
    scanf("%d", &t);

    int *vetor = criarvetor(&t);
    if (!vetor)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }

    preenxer(vetor, &t);
    iprimir(vetor, &t);

    limpar(vetor);
    return 0;
}