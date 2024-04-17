#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *vetor = NULL;
    int op;
    int contador = 0;
    printf("para sair digite algum numero negativo!!\n");
    do
    {
        if (op > 0)
        {
        contador++;
        printf("Informe o valor da posição [%d] do primeiro vetor:", contador);
        scanf("%d", &op);
        vetor = (int *)realloc(vetor, contador * sizeof(int));
        if (!vetor)
        {
            printf("ERRO!!!!");
            exit(EXIT_FAILURE);
        }
            vetor[contador - 1] = op;
        }else{
            contador--;
        }

    } while (op > 0);
     printf(" valores digitados : [");
     for (int i = 0; i < contador - 1; i++)
     {
        printf("%d, ", vetor[i]);
     }
     printf("]");
     

  
    free(vetor);
}
