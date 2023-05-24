#include <stdio.h>
#include "ft_printf.h"
int main ()
{
    int i;
    char *str;
    int *j;
    int a;
    int b;

    str = "Hola";
    i = 25;
    j = &i;

    a = ft_printf("%s es caracter, %d es numero, %p puntero, %% \n", str, i, j);
    b = printf("%s es caracter, %d es numero, %p puntero, %% \n", str, i, j);
    printf("REal %d, Mio %d", b, a);
}
