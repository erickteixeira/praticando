#include <stdio.h>
#include <stdlib.h>


void analisador(float a, float b, float c);

int main(void)
{

  float n1, n2, n3;
  
  printf("informe os valores em uma unica linha\n");
  scanf("%f%f%f", &n1,&n2 ,&n3);
  analisador(n1,n2,n3);

  return 0;

}

void analisador(float a, float b, float c)
{
  if(a>=b && a>=c)
    printf("o maior entre eles %f\n", a);
  else
  {
    if(b>=a && b>=c)
      prinf("o maior entre eles %f\n", b);
    else
      printf("o maior entre eles %f\n", c);
  }

  return;
}
