#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
  float f,
        n1,
        n2,
        n3,
        m,
        mf;
};

void analisador(aluno);

int main(void)
{
  aluno n1;
  
  analisador(aluno n1);

  return 0;
}
 
void analisador(aluno)
{
  printf("informe o valor do numero de faltas\n");
  scanf("%f", &n1.f);
  if(f<=18)
  {
    printf("informe o valor da primeira e da segunda nota em uma linha\n");
    scanf("%f %f", n1.n1, n1.n2);

    n1.m = (n1+n2)/2.0;

    if(n1.m>=7)
      printf("parabens voce passou com media: %f", n1.m);
    else
    {
      printf("informar o valor da nota final\n");
      scanf("%f", &n1.n3);
      
      n1.mf = n1.n3 + n1.m;

      if(n1.mf<10)
        printf("voce foi reprovado na final\n");
      else
        printf("voce passou na final\n")
    }
  }
  else
    prinf("reprovado por falta\n");

  return;
}
