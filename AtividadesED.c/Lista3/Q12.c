#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocar(char *string1, char *string2, int tamanho1, int tamanho2)
{
    char aux[100];
    if (tamanho1 > tamanho2)
    {
        for (int i = 0; i <= tamanho1; i++)
        {
            aux[i] = string1[i];
            string1[i] = string2[i];
            string2[i] = aux[i];
        }
        printf("string1: %s\n", string1);
        printf("string2: %s\n", string2);
    }
    else if (tamanho2 > tamanho1)
    {
        for (int i = 0; i <= tamanho2; i++)
        {
            aux[i] = string1[i];
            string1[i] = string2[i];
            string2[i] = aux[i];
        }
        printf("string1: %s\n", string1);
        printf("string2: %s\n", string2);
    }
}

int main()
{
    char primeira[100], segunda[100];
    printf("informe a primeira string:");
    fgets(primeira, 100, stdin);
    printf("informe a segunda string:");
    fgets(segunda, 100, stdin);

    int tamanhos1 = strlen(primeira);
    int tamanhos2 = strlen(segunda);

    printf("tamanho da primeira string: %d\n", tamanhos1);
    printf("tamanho da segunda string: %d\n", tamanhos2);

    char *string1 = (char *)malloc((tamanhos1 + 1) * sizeof(char));
    if (!string1)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    strcpy(string1, primeira);

    char *string2 = (char *)malloc((tamanhos2 + 1) * sizeof(char)); 
    if (!string2)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    strcpy(string2, segunda);

    trocar(string1, string2, tamanhos1, tamanhos2);

    free(string1);
    free(string2);
    return 0;
}
