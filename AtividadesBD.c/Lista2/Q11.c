#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int matricula;
    char situacao[10];
    float media;
} Aluno;

int main()
{
    int quantidade;
    float notas[3];
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quantidade);
    Aluno *alunos = (Aluno *)malloc(quantidade * sizeof(Aluno));
    if (!alunos)
    {
        printf("Erro ao alocar memoria");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("Informe o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("Informe a nota %d do aluno: ", j + 1);
            scanf("%f", &notas[j]);
        }
        int media = (notas[0] + notas[1] + notas[2]) / 3;
        alunos[i].media = media;
        if (media >= 7)
        {

            strcpy(alunos[i].situacao, "Aprovado");
        }
        else
        {
            strcpy(alunos[i].situacao, "Reprovado");
        }
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Media: %.2f\n", alunos[i].media);
        printf("Situacao: %s\n", alunos[i].situacao);
    }

    free(alunos);
    return 0;
}