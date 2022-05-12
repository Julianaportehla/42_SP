#include<string.h>
#include<stdio.h>
int main() {
  char src[16] = {'m', 'a', 'c', 'a', '\0'};
  char dest[16] = {'T','E', 'S','T','E',' ', 'D','E', ' ', 'S','T','R','I','N','G','\0'};
  int i;

  i = 0;
  while (i < 16)
  {
	  i++;
  }
  dest[i] = src[i];

  
  printf("\nManual\nOrigem = %s\n\nDestino = %s", src, dest);

  strcpy(dest, src);
   printf("\n\nCom Funcao\nOrigem = %s\n\nDestino = %s\n\n", src, dest);
}
