#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostarcaracter(char *string, int tamanho, int caractere)
{
    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] == caractere)
        {
            string[i] = '*';
            contador++;
        }
    }

    printf("o caractere aparece %d vezes\n", contador);
    printf("nas seguintes posicoes:");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", string[i]);
    }
    
    printf("\n");
}
int main()
{
    char string[100];
    char caractere;
    printf("Informe uma string: ");
    fgets(string, 100, stdin);

    int tamanho = strlen(string);

    printf("Tamanho da string: %d\n", tamanho - 1);
    printf("informe o caractere que deseja buscar: ");
    scanf("%c", &caractere);
    mostarcaracter(string, tamanho, caractere);

    return 0;
}