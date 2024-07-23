#include "lista.c"
#include <stdio.h>
#include <stdlib.h>


int main(){

    Elemento *lista;
    lista = criaLista();
    int opcao = menu();

    

    do
    {
        switch (opcao)
        {
        case 1:
            lista = addInicio(lista);
            break;
        case 2:
            addFinal(lista);
            break;
        case 3:
            removerElemento(lista);
            break;
        case 4:
            mostrarLista(lista);
            break;
        case 5:
            printf("Tamanho da lista: %d\n", tamanhoDaLista(lista));
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
        system("cls");
        opcao = menu();
    } while (opcao != 6);
    
    

    mostrarLista(lista);

    return 0;
}