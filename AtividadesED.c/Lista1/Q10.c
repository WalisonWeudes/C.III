#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float *media(float *vetor, int tamanho)
{
    float soma = 0;
    float media;
    for (int i = 0; i < tamanho; i++)
    {
        soma = soma + vetor[i];
    }
    media = soma / tamanho;
    
   printf("A media e: %.2f",media);
    return NULL;
}

int main()
{
    int tamanho;
    printf("Informe a quantidade de alunas:");
    scanf("%d",&tamanho);
    float *vetor = (float *)malloc(tamanho * sizeof(float));
    if (!vetor)
    {
        printf("ERRO!!!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe a nota do %d aluno:", i + 1);
        scanf("%f", &vetor[i]);
    }

    media(vetor,tamanho);
    
    
   

    free(vetor);

    return 0;
}