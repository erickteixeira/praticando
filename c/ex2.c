#include <stdio.h>
#include <stdlib.h>


void media(void);

int main(void)
{
  printf("=== MEDIA DE DOIS VALORES ===\n");
  media();

  return 0;
}

void media(void)
{
  float n1, n2, m;

  printf("favor informar os valores dos numeros na mesma linha\n");
  scanf("%f %f", &n1, &n2);
  m = ((n1+n2)/2.0);
  printf("a media entre os numeros: %f\n", m);
  
  return;
}
