#include <stdio.h>
#include <string.h>

int main()
{
    int contador[100];
    char vetor[100];

    printf("Informe a frase: ");
    fgets(vetor, sizeof(vetor), stdin);

    int cont = strlen(vetor);

    for (int i = 0; i < cont; i++)
    {
        contador[i] = 0;
    }

    for (int x = 0; x < cont; x++)
    {
        for (int i = 0; i < cont; i++)
        {
            if (vetor[x] == vetor[i])
            {
                contador[x]++;
            }
        }
    }

    for (int i = 0; i < cont; i++)
    {

        printf("Caractere %c: %d\n", vetor[i], contador[i]);
    }

    return 0;
}
