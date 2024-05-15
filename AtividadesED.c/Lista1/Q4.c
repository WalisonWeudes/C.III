#include <stdlib.h>
#include <stdio.h>

int** alocaMatriz(int *m, int *n){

    int** matriz = (int**)malloc(*m * sizeof(int*));
    if(!matriz){
        printf("ERRO!!");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < *m; i++)
    {
        matriz[i] = (int*)malloc(*n * sizeof(int));
    }

    return matriz;
    
}
int main()
{
    int linhas;
    int colunas;
    printf("informe a quantidade de linhas:");
    scanf("%d", &linhas);
    printf("informe a quantidade de colunas:");
    scanf("%d", &colunas);

    int** matriz = alocaMatriz(&linhas, &colunas);

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
