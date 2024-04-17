#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y)
{

    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * potencia(x, y - 1);
    }
}

int main()
{
    int x, y;
    printf("infome o valor de x: ");
    scanf("%d", &x);
    printf("infome o valor de y: ");
    scanf("%d", &y);

    int valor = potencia(x, y);

    printf("%d", valor);
}