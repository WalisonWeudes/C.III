#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *criarvetor(int *tamanho)
{
    int *vetor = (int *)malloc(*tamanho * sizeof(int));
    if (!vetor)
    {
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

void limpar(int *vetor)
{

    return free(vetor);
}
void imprime(int *vetor, int *tamanho)
{

    printf("Valores armazenados no vetor [");
    for (int i = 0; i < *tamanho; i++)
    {
        printf("%d,", vetor[i]);
    }
    printf("]");
    printf("\n");
}
void concanetar(int *vetor1, int *vetor2, int *tamanho1, int *tamanho2)
{
    int tamanho = *tamanho1 + *tamanho2;
    int *vetor3 = criarvetor(&tamanho);
    for (int i = 0; i < *tamanho1; i++)
    {
        vetor3[i] = vetor1[i];
    }

    for (int i = *tamanho1, j = 0; i < tamanho; i++)
    {
        vetor3[i] = vetor2[j];
        j++;
    }
    printf("Valores armazenados no vetor [");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d,", vetor3[i]);
    }
    
    printf("]");
}

int main()
{

    int t1;
    int t2;
    printf("informe o tamanho do primeiro vetor: ");
    scanf("%d", &t1);
    printf("informe o tamanho do segundo vetor: ");
    scanf("%d", &t2);

    int *vetor1 = criarvetor(&t1);
    if (!vetor1)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    int *vetor2 = criarvetor(&t2);
    if (!vetor2)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    preenxer(vetor1, &t1);
    preenxer(vetor2, &t2);
    printf("vetor 1\n");
    imprime(vetor1, &t1);
    printf("vetor 2\n");
    imprime(vetor2, &t2);
    printf("veto 3\n");
    concanetar(vetor1, vetor2, &t1, &t2);

    limpar(vetor1);
    return 0;
}