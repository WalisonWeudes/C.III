#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int *vetor, int tamanho)
{

    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 1)
        {
            soma = soma + vetor[i];
        }
    }
    return soma;
}

int main()
{

    int tamanho = 0;
    printf("Qual o tamanho do vetor?:\n");
    scanf("%d",&tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));
        for (int i = 0; i < tamanho; i++)
        {
        printf("Informe o valor da posição [%d] do primeiro vetor:", i+ 1);
        scanf("%d", &vetor[i]);
        if (!vetor)
        {
            printf("ERRO!!!!");
            exit(EXIT_FAILURE);
        }
        }

    int valorsoma = soma(vetor,tamanho);

    printf("A soma dos imapares é: %d",valorsoma);

    free(vetor);

}
