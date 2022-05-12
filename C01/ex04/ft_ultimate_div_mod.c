#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int aux1;
	int aux2;

	aux1 = *a / *b;
	aux2 = *a % *b;
	*a = aux1;
	*b = aux2;
}
