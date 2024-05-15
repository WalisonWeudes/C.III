#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int ano;
} Livro;

Livro* criarVetorLivros(int n){
    Livro* vetor = (Livro*)malloc(n * sizeof(Livro));
    if(vetor == NULL){

        printf("Erro!!");
        exit(EXIT_FAILURE);
        
    }
    return vetor;
}

void imprimirVetorLivros(Livro* vetor, int n){
    for(int i = 0; i < n; i++){
        printf("Titulo: %s\n", vetor[i].titulo);
        printf("Autor: %s\n", vetor[i].autor);
        printf("Ano: %d\n", vetor[i].ano);
    }
}
void liberarVetorLivros(Livro* vetor){
    free(vetor);
}
int main(){
    int n = 1;
    Livro* vetor = criarVetorLivros(n);
    for(int i = 0; i < n; i++){
        printf("Informe o titulo do livro: ");
        gets(vetor[i].titulo);
        printf("Informe o autor do livro: ");
        gets(vetor[i].autor);
        printf("Informe o ano do livro: ");
        scanf("%d", &vetor[i].ano);
    }
    imprimirVetorLivros(vetor, n);
    return 0;
}