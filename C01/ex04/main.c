#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main()
{
	int *a;
	int *b;
	int aux1;
	int aux2;

	aux1 = 5;
	aux2 = 5;

	a = &aux1;
	b = &aux2;

	ft_ultimate_div_mod(a, b);
	printf("%d\n%d\n", aux1, aux2);
	return (0);

}