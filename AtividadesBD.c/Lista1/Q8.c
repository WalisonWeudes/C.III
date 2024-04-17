#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* inverter(char *s)
{
    int tamanhostring = strlen(s) - 1;
    char *string =(char *)malloc(tamanhostring * sizeof(char));
    if (!string)
    {
        printf("ERRO!!!!");
        exit(EXIT_FAILURE);
    }

    int j = 0;
    for (int i = tamanhostring; i >= 0; i--)
    {
        string[j] = s[i];
        j++;
    }
    string[j] ='\0';
    printf("%s", string);
    
    
    return string;
}
int main()
{
    char string[100];
    printf("Digite a palavra:");
   fgets(string, sizeof(string), stdin);

    char *n = inverter(string);

    free(n);
    return 0;
}