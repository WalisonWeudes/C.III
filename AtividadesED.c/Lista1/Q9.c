#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float *multiplicar(float *vetor)
{

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = vetor[i] * (vetor[i] / 3);
    }
    return vetor;

}

int main()
{

    float *vetor = (float *)malloc(10 * sizeof(float));
    if (!vetor)
    {
        printf("ERRO!!!");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %d valor: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    float *novovetor= multiplicar(vetor);
    printf("[");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f, ",novovetor[i]);
    }
    printf("]");
    

    free(vetor);

    return 0;
}