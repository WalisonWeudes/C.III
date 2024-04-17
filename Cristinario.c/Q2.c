#include <stdio.h>
#include <stdlib.h>
void media(int *vetor, int cont){
    int soma = 0;

    for (int i = 0; i < cont; i++)
    {
        soma+=vetor[i];
    }
    float media = soma/cont;
    printf(" A mesia das idade é: %.2f",media);
    

}
int main(){
    int *vetor = NULL;
    int cont = 0;
    int x;

    while (1)
    {
        printf("Informe a idade da %d pessoa: ", cont + 1);
        scanf("%d", &x);
        if(x == -1)
         break;

          cont++;
          vetor =(int*)realloc(vetor,cont * sizeof(int));
        if (!vetor)
        {
            printf("Alocamneto deu errado!!!");
            break;
        }

        vetor[cont -1] = x;
        
    }

    media(vetor, cont);

    free(vetor);

    return 0;
    
}