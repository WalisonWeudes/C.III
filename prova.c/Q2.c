#include <stdio.h>

int antecessor(int x)
{
    return x - 1;
}

int sucessor(int x)
{
    return x + 1;
}

int somar_valores(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else
    {
        return somar_valores(antecessor(x), sucessor(y));
    }
}



int main()
{
    int x = 5;
    int y = 10;
   
    int resultado = somar_valores(x, y);
    printf("Soma: %d\n", resultado);
    return 0;
}
