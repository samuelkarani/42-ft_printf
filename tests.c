#include <stdio.h>
#include "ft_printf.h"
int main()
{
 printf("%#.o\n", 42);
 ft_printf("%#.o\n", 42);
 printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
 ft_printf("{%f}{%lf}{%Lf}\n", 1.42, 1.42, 1.42l);
 printf("{%#.5x}\n", 1);
 ft_printf("{%#.5x}\n", 1);
}