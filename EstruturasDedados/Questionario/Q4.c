#include <stdio.h>

int inverterNumero(int x) {
    return x < 10 ? x : (x % 10) * potencia(10, digitos(x) - 1) + inverterNumero(x / 10);
}

int digitos(int x) {
    return x < 10 ? 1 : 1 + digitos(x / 10);
}

int potencia(int base, int expoente) {
    return expoente == 0 ? 1 : base * potencia(base, expoente - 1);
}

int main() {
    int x;
    printf("Informe um numero: ");
    scanf("%d", &x);
    printf("Numero original: %d\n", x);
    printf("Numero invertido: %d\n", inverterNumero(x));
    return 0;
}
