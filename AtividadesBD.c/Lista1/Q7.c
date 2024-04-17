#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *repete(char *s, int n)
{
    int tamanho = (strlen(s) * n) + (n - 1);
    strcat(s," ");
    int tamanhostring = strlen(s);
    

    char *novastring = (char *)malloc(tamanho * sizeof(char));
    
    int j = 0;
    for (int i = 0; i < tamanho; i++)
    {
            if (j == tamanhostring)
            {
                j = 0;
            }
            
            novastring[i] = s[j];
            j++;
        
    }
    novastring[tamanho] = '\0';

    printf("%s.", novastring);


    return NULL;
}
int main()
{
    char string[100];
    int r;
    printf("Digite a palavra:");
    gets(string);
    printf("qunatas vezes deseja repetila:");
    scanf("%d", &r);

    char *n = repete(string, r);

    free(n);
    return 0;
}