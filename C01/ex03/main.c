#include <stdio.h>
#include "ft_div_mod.c"

int main()
{
	int a;
	int b;
	int *div;
	int *mod;
	int div1;
	int mod1;

	a = 5;
	b = 5;

	div = &div1;
	mod = &mod1;

	ft_div_mod(a, b, div, mod);
	printf("%d\n%d\n", div1, mod1);
	return (0);

}