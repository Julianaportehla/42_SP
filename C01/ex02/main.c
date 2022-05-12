#include <stdio.h>
#include "ft_swap.c"

int main()
{
	int *p1;
	int *p2;
	int ex1;
	int ex2;

	ex1 = 2;
	ex2 = 5;

	p1 = &ex1;
	p2 = &ex2;

	ft_swap(p1, p2);
	printf("%d\n%d\n", ex1, ex2);
	return(0);
}
