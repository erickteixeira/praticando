#include <stdio.h>
#include <stdlib.h>

void maior(float a, float b, float c);

int main(void)
{
  float n1, n2, n3;

  printf("informe os valores dos numeros em uma so linha\n");
  scanf("%f %f %f", &n1, &n2, &n3);
  maior(n1, n2, n3);
}

void maior(float a, float b, float c)
{
  
    if(a>b && a>c)
      printf("o maior entre os tres: %f\n", a);
    else
    {
      if(b>a && b>c)
        printf("o maior entre os tres: %f\n", b);
      else
        printf("o maior entre os tres: %f\n", c);
    }

    return;

}
