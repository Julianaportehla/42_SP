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
   ft_strncpy(dest, src, i);
   printf("\n\nCom Funcao\nOrigem = %s\n\nDestino = %s \n %d\n", src, dest, i);
   return 0;
}


