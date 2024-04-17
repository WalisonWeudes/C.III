#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerador(int *vetor){


    srand(time(NULL));
    for (int i = 0; i < 13; i++)
    {
        vetor[i] = rand() % 13 + 1;
    }
    for (int i = 0; i < 13; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
}

void comparar(int *vetor){
   char *cartas[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int *contarcartas = (int *)malloc(13 * sizeof(int));
    if (!contarcartas)
    {
        printf("Alocação falhou");
    }
    for (int i = 0; i < 13; i++)
    {
        contarcartas[i] = 0;
    }
    

    for (int i = 0; i < 13; i++)
    {
       for (int j = 0; j < 13; j++)
       {
        if (i + 1 == vetor[j])
        {
            contarcartas[i]++;
        }
        
       }
       
    }
    for (int i = 0; i < 13; i++)
    {
        printf("a carta %s apreceu %d vezes\n",cartas[i],contarcartas[i]);
    }
    
    
    free(contarcartas);
}

int main(){
    int *vetor = (int *)malloc(13 * sizeof(int));
    if (!vetor)
    {
        printf("A alocação falhou!!!");
        exit(EXIT_FAILURE);
    }
    gerador(vetor);
    comparar(vetor);
    free(vetor);


    

    return 0;
}