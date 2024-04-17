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

    int *vetor = NULL;
    int op;
    int contador = 0;
    printf("Caso queira sair digite algum numero negativo!!\n");
    do
    {
        if (op > 0)
        {
        contador++;
        printf("Informe o valor da posição [%d] do primeiro vetor:", contador);
        scanf("%d", &op);
        vetor = (int *)realloc(vetor, contador * sizeof(int));
        if (!vetor)
        {
            printf("ERRO!!!!");
            exit(EXIT_FAILURE);
        }
            vetor[contador - 1] = op;
        }

    } while (op > 0);
    int valorsoma = soma(vetor,contador);

    printf("A soma dos imapares é: %d",valorsoma);
    free(vetor);
}
