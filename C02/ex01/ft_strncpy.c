/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-jesu <jde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:16:46 by jde-jesu          #+#    #+#             */
/*   Updated: 2022/04/23 00:08:03 by jde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

#include<string.h>
#include<stdio.h>
int main() {
  char src[16] = {'T','E', 'S','T','E',' ', 'D','E', ' ', 'S','T','R','I','N','G','\0'};
  char dest[16];
  int i;
  /* Movimentação Manual */
  for (i= 0; i < 16; i++) {
     dest[i] = src[i];
  }
  printf("\nManual\nOrigem = %s\n\nDestino = %s", src, dest);

  /*Movimentação com Strcpy*/
   ft_strncpy(dest, src, 2);
   printf("\n\nCom Funcao\nOrigem = %s\n\nDestino = %s \n", src, dest);
   return 0;
}
