#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void maiorstring(char *string1, char *string2, char *string3, char *string4, char *string5, char *string6, int tamanho1, int tamanho2, int tamanho3, int tamanho4, int tamanho5, int tamanho6)
{
  
}
int main()
{
    char primeira[100], segunda[100],terceira[100],quarta[100],quinta[100],sexta[100];
    printf("informe a primeira string:");
    fgets(primeira, 100, stdin);
    printf("informe a segunda string:");
    fgets(segunda, 100, stdin);
    printf("informe a terceira string:");
    fgets(terceira, 100, stdin);
    printf("informe a quarta string:");
    fgets(quarta, 100, stdin);
    printf("informe a quinta string:");
    fgets(quinta, 100, stdin);
    printf("informe a sexta string:");
    fgets(sexta, 100, stdin);


    int tamanhos1 = strlen(primeira);
    int tamanhos2 = strlen(segunda);
    int tamanhos3 = strlen(terceira);
    int tamanhos4 = strlen(quarta);
    int tamanhos5 = strlen(quinta);
    int tamanhos6 = strlen(sexta);


    printf("tamanho da primeira string: %d\n", tamanhos1);
    printf("tamanho da segunda string: %d\n", tamanhos2);
    printf("tamanho da terceira string: %d\n", tamanhos3);
    printf("tamanho da quarta string: %d\n", tamanhos4);
    printf("tamanho da quinta string: %d\n", tamanhos5);
    printf("tamanho da sexta string: %d\n", tamanhos6);


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
    char *string3 = (char *)malloc((tamanhos3 + 1) * sizeof(char));
    if (!string3)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    char *string4 = (char *)malloc((tamanhos4 + 1) * sizeof(char));
    if (!string4)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    char *string5 = (char *)malloc((tamanhos5 + 1) * sizeof(char)); 
    if (!string5)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    char *string6 = (char *)malloc((tamanhos6 + 1) * sizeof(char));
    if (!string6)
    {
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    maiorstring(string1, string2, string3, string4, string5, string6, tamanhos1, tamanhos2, tamanhos3, tamanhos4, tamanhos5, tamanhos6);


    free(string1);
    free(string2);
    free(string3);
    free(string4);
    free(string5);
    free(string6);
    return 0;
}