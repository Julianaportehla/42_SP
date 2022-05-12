#include <unistd.h>
#include "ft_putstr.c"

int main()
{
	char *aux;

	char a[7] = "banana";
	aux = a;

	ft_putstr(aux);
	return (0);
}
