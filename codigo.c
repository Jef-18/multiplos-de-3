#include <stdio.h>

int main(void) 
{

  int ciclo, soma = 0;

  for(ciclo = 3; ciclo <= 100; ciclo = ciclo + 3)
  {
    soma = soma + ciclo;

    printf("%d\n", ciclo);
    
  }
  printf("\nsoma: %d", soma);
  
  return 0;

}


