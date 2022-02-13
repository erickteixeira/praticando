#include <stdio.h>
#include <stdlib.h>

void conversor(float a, float b, float c, float d, float e, float f);

int main(void)
{
  float a, b, c, d, e, f;

  printf(" favor digitar os numeros na seguinte sequencia A B C D E F\n");
  scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
  conversor(a,b,c,d,e,f);

  return 0;
}

void conversor(float a, float b, float c, float d, float e, float f)
{
  float x, y;

  y = ((f-d*c/a))/((-d*b)/(a+e));

  x = (c-b*y)/a;

  printf("o valor de y: %f\n", y);

  printf("o valor de x: %f\n", x);

  return;

}
