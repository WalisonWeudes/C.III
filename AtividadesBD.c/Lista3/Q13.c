#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preexer(int *vetor, int *tamanho)
{
    srand(time(NULL));

    for (int i = 0; i < *tamanho; i++)
    {
        vetor[i] = rand() % 100 + 1;
    }
}
void inverter(int *vetor, int *tamanho)
{
     printf("Valores investido [");
    for (int i = *tamanho - 1; i >= 0; i--)
    {
        printf("%d,", vetor[i]);
    }
    printf("]");
}
int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (!vetor)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    
    preexer(vetor, &tamanho);
    printf("Valores armazenados no vetor [");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
    printf("]");
    printf("\n");
    inverter(vetor, &tamanho);

    free(vetor);
    

    return 0;
}