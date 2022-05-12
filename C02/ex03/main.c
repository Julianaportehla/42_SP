#include <stdio.h>

int	main()
{
	if (ft_str_is_numeric(""))
	{
		printf("A string só contem numeros!\n");	
	}
	else
	{
		printf("A entrada possui outros tipo de caractere\n");
	}
	return(0);
}

