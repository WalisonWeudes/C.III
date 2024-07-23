#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Elemento *criaLista()
{
    return NULL;
}

Elemento *addInicio(Elemento *l)
{
    // criar novo elemento
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    // ajustar o valor do ponteiro para o prox elemento
    novo->prox = l;
    // ler o valor do novo elemento
    printf("Digite o valor do novo elemento: ");
    scanf("%d", &novo->info);
    // retornar o novo elemento
    return novo;
}
void mostrarLista(Elemento *l)
{
    if (l == NULL)
        printf("Lista vazia ");
    else
    {
        Elemento *aux = l;
        while (aux != NULL)
        {
            printf("%d -> ", aux->info);
            aux = aux->prox;
        }
    }
}

Elemento *removerElemento(Elemento *l)
{
    int valor;
    printf("Digite o valor a ser removido: ");
    scanf("%d", &valor);
    Elemento *aux = l;
    Elemento *ant = NULL;
    while (aux != NULL && aux->info != valor)
    {
        ant = aux;
        aux = aux->prox;
    }
    if (aux == NULL)
    {
        printf("Elemento nao encontrado\n");
        return l;
    }
    if (ant == NULL)
    {
        l = aux->prox;
    }
    else
    {
        ant->prox = aux->prox;
    }
    free(aux);
    return l;
}
int tamanhoDaLista(Elemento *l)
{
    int cont = 0;
    Elemento *aux = l;
    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void addFinal(Elemento *l)
{
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    novo->prox = NULL;
    printf("Digite o valor do novo elemento: ");
    scanf("%d", &novo->info);
    if (l == NULL)
    {
        l = novo;
    }
    else
    {
        Elemento *aux = l;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

Elemento *addOrdeandoCrescente(Elemento *l){}

int menu()
{
    int opcao;
    printf("\n1- Adicionar elemento no inicio\n");
    printf("2- Adicionar elemento no final\n");
    printf("3- Remover elemento\n");
    printf("4- Mostrar lista\n");
    printf("5- Tamanho da lista\n");
    printf("6- Sair\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    return opcao;
}
