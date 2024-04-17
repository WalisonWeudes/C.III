#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char posicao[100];
    int numeroCamisa;
} Jogador;

void* alocarMemoria(int quantidade){
    Jogador *p = (Jogador*)malloc(quantidade * sizeof(Jogador));
    return p;
}
void printar(Jogador *p, int quantidade){
    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Posicao: %s\n", p[i].posicao);
        printf("Numero da camisa: %d\n", p[i].numeroCamisa);
    }
}


void liberarMemoria(Jogador *p){
    free(p);
}
int main() {
    int quantidadetitular,quantidadereserva;
    printf("Informe quantos jogadores titulares deseja cadastrar: ");
    scanf("%d", &quantidadetitular);

    Jogador *titular = (Jogador*)alocarMemoria(quantidadetitular);
    for (int i = 0; i < quantidadetitular; i++) {
        printf("Informe o nome do jogador: ");
        scanf("%s", titular[i].nome);
        printf("Informe a idade do jogador: ");
        scanf("%d", &titular[i].idade);
        printf("Informe a posicao do jogador: ");
        scanf("%s", titular[i].posicao);
        printf("Informe o numero da camisa do jogador: ");
        scanf("%d", &titular[i].numeroCamisa);
    }

    printf("Informe quantos jogadores reservas deseja cadastrar: ");
    scanf("%d", &quantidadereserva);

    Jogador *reserva = (Jogador*)alocarMemoria(quantidadereserva);
    for (int i = 0; i < quantidadereserva; i++) {
        printf("Informe o nome do jogador: ");
        scanf("%s", reserva[i].nome);
        printf("Informe a idade do jogador: ");
        scanf("%d", &reserva[i].idade);
        printf("Informe a posicao do jogador: ");
        scanf("%s", reserva[i].posicao);
        printf("Informe o numero da camisa do jogador: ");
        scanf("%d", &reserva[i].numeroCamisa);
    }
    printf("Jogadores titulares:\n");
    printar(titular, quantidadetitular);
    printf("\n");
    printf("Jogadores reservas:\n");
    printar(reserva, quantidadereserva);

    liberarMemoria(titular);
    liberarMemoria(reserva);

    return 0;
}
