#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int *m, int *n) {
    int** matriz; 
    matriz = (int**)malloc(*m * sizeof(int*));

    if (matriz == NULL) {
        printf("Erro!!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *m; i++) {
        matriz[i] = (int*)malloc(*n * sizeof(int)); 
        if (matriz[i] == NULL) {
            printf("Erro!!");
            exit(EXIT_FAILURE);
        }
    }

    return matriz;
}

void liberaMemoria(int** matriz,int *m){
 for (int i = 0; i < *m; i++)
    {
    free(matriz[i]);
    }
    free(matriz);

}

int main(){
    int linhas;
    int colunas;
    printf("Informe o tamanho a quantidades de linhas: ");
    scanf("%d", &linhas);
    printf("Informe o tamanho a quantidades de colunas: ");
    scanf("%d", &colunas);

    int** matriz = alocaMatriz(&linhas, &colunas);

    liberaMemoria(matriz, &linhas);
   

    return 0;
}