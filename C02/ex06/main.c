#include <stdio.h>

int	main()
{
	if (ft_str_is_printable("\n"))
	{
		printf("A string só contem caracteres caracteres imprimíveis!\n");	
	}
	else
	{
		printf("A entrada possui outros tipo de caractere\n");
	}
	return(0);
}
