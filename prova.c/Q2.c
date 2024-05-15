#include <stdio.h>

int somar_valores(int x, int y) {
    if (x == 0) {
        return y;
    } else {
        return somar_valores(x - 1, y + 1);
    }
}

int antecessor(int x) {
    return x - 1;
}

int sucessor(int x) {
    return x + 1;
}

int main() {
    int x = 5;
    int y = 10;
    int resultado = somar_valores(x, y);
    printf("Soma: %d\n", resultado);
    printf("Antecessor: %d\n", antecessor(resultado));
    printf("Sucessor: %d\n", sucessor(resultado));
    return 0;
}
