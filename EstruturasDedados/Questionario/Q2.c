#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int linhas = 200;
    int colunas = 100;
    int matriz[200][100];
    int x;
    srand(time(NULL));
    printf("informe ate onde voce quer que aleatorize os numeros: ");
    scanf("%d", &x);
    int contador[x];

    for (int i = 0; i < x; i++)
    {
        contador[i] = 0;
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % x;
        }
    }
    
    for(int z = 0; z < x; z++)
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(matriz[i][j] == z){
                contador[z]++;
            }
        }
    }


   

    for (int i = 0; i < x; i++)
    {
        printf("O numero %d apareceu %d vezes\n", i, contador[i]);
    }
}
