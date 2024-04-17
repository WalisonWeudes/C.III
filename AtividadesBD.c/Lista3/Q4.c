#include <stdio.h>
#include <stdlib.h>

char* retornar(char c){
    char* vetor = (char*)malloc(1 * sizeof(char));
    vetor[0] = c;

    return vetor;
}

int main(){
    char c = 'C';

    char* string = retornar(c);

    printf("%c",string[0]);

    return 0;
}