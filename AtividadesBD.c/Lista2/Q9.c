#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char descricao[200];
    float valor;
} Eletronico;
typedef struct {
    char nome[100];
    char cpf[15];
    Eletronico eletronico;
} Pessoa;