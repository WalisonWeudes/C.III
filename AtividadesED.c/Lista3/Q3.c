#include <stdio.h>

int main() {
    int vetor[] = {1, 4, 2, 65, 100,48,43,86,54,23,53};
    int *ponteiroVetor = vetor; 

    for (int i = 0; i < 11; i++) {
        printf("Posição [%d] =  %d\n", i, *ponteiroVetor);
        ponteiroVetor++;
    }

    return 0;
}