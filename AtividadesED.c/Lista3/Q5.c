#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void converter(char *string, int tamanho)
{
    printf("nome minusculos:%s",string);
    for (int i = 0; i < tamanho - 1; i++)
    {
        string[i] = toupper(string[i]);
    }
    printf("nome maiusculos: ");
    printf("%s", string);
    for (int i = 0; i < tamanho - 1; i++)
    {
        if (i % 2 == 0)
        {
        string[i] = toupper(string[i]);
        }
        else{

        string[i] = tolower(string[i]);
        }
        
    }
    printf("nome sequencial: ");
    printf("%s", string);
}

int main()
{

    char valor[100];
    fgets(valor, sizeof(valor), stdin);
    int tamanho = strlen(valor);
    converter(valor, tamanho);

    return 0;
}
