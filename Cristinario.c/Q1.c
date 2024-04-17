#include <stdio.h>
#include <stdlib.h>

void printar(float *vetor, int contador)
{
    for (int i = 0; i < contador; i++)
    {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}
void somar(float *vetor, int contador){
    float soma = 0;
    for (int i = 0; i < contador; i++)
    {
        soma+= vetor[i];
    }
    printf("A soma dos valores: %.2f",soma);
}
int main()
{
    float x;
    int contador = 0;
    float *vetor = NULL;

    printf("Informe o valor das questões e caso queira parar, digite -1\n");

    while (1)
    {
        printf("Informe o valor da %dª questão: ", contador + 1);
        scanf("%f", &x);

        if (x == -1)
            break;

        contador++;
        vetor = (float *)realloc(vetor, contador * sizeof(float));
        if (vetor == NULL)
        {
            printf("Erro de alocação de memória\n");
            exit(EXIT_FAILURE);
        }

        vetor[contador - 1] = x;
    }

    printar(vetor, contador);
    somar(vetor, contador);

 
    free(vetor);

    return 0;
}
