#include <stdio.h>
#include <stdlib.h>
/*
o ponteiro de q recebe o valor do ponteiro de p, logo o valor de q é 123
o ponteiro de q recebe o endereço de p, logo o endereço de q é igual ao de p
*/
int main()
{
    int *p, *q;
   p = malloc (sizeof (int));
   *p = 123;
   q = malloc (sizeof (int));
   *q = *p;
   q = p;
   printf("p = %d\n", *p);
   printf("p = %p\n", p);
    printf("q = %d\n", *q);
    printf("q = %p\n", q);
   free (p);
   free (q); 
   q = NULL; 
    return 0;
}