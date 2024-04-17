#include <stdio.h>

int main()
{
    int vetor[100];
    int I = 0, soma = 0;
    int x, maior = 0, menor;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        vetor[I] = x;
        I++;
    } while (x != -1);
    menor = vetor[0];
    for (int j = 0; j < I - 1; j++)
    {
        if (vetor[j] > maior)
        {
            maior = vetor[j];
        }
        if (vetor[j] < menor)
        {
            menor = vetor[j];
        }
    }

    for (int J = 0; J < I - 1; J++)
    {
        soma = soma + vetor[J];
    }
    float media = (float)soma / (I - 1);
    printf("A soma dos numeros digitados e: %d\n", soma);
    printf("O maior numero digitado e: %d\n", maior);
    printf("O menor numero digitado e: %d\n", menor);
    printf("A media dos numeros digitados e: %.2f\n", media);
}