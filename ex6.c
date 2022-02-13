#include <stdio.h>
#include <stdlib.h>


void anaboo(int a, int b);

int main(void)
{
  int a, b;
  printf("escreva os valores em um unica linha\n");
  scanf("%f %f", &a, &b);
  anaboo(a,b);

}

int anaboo(int a, int b)
{
  a = (a!=0)==1;
  b = (b!=0)==1;

  if(a && b)
    printf("a e b sao verdadeiros\n");
  else
    printf("a e b falso\n");

  if(a || b)
    printf("a e b verdadeiro\n");
  else
    printf("a e b falso\n");

  if(!a)
    prinf("nao a verdadeiro\n");
  else
    printf("nao a falso\n");
  
  if((a|| b ) && (a && b ))
    printf("a ou-exclusivo b verdadeiro\n");
  else
    printf("a ou exclusivo b falso\n");

  if(!a || b )
    printf("a implica b verdadeiro\n");
  else
    printf("a implica b falso\n");

  if(a==b)
    printf("a se somente se b b verdadeiro\n");
  else
    printf("a se somente se b falso");

  return;
  
}
