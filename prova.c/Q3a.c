#include <stdio.h>
#include <stdlib.h>



int** alocarMatriz(int m, int n){
    int** matriz;
    int valor = 0;
    matriz = (int**)malloc(m * sizeof(int*));
    if(matriz == NULL){
        printf("Erro!!");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < m; i++){
        matriz[i] = (int*)malloc(n * sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro!!");
            exit(EXIT_FAILURE);
        }
    }
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = ++valor;
            
        }
    }
    
    return matriz;
}
void printarMatriz(int** matriz, int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    int linhas = 3;
    int colunas = 3;
    int** matriz = alocarMatriz(linhas, colunas);
    printarMatriz(matriz, linhas, colunas);
    return 0;
}