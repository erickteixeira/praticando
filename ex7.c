#include <stdio.h>
#include <stdlib.h>


void maiormenor(void);

int main(void)
{
    maiormenor();

    return; 

}

void maiormenor(void)
{

  int i, maior, menor, n;

  for(i=1;i<=10;i++)
  {
    printf("digite o %d numero",i);
    scanf("%d", &n);
    if(i==1)
    {
      maior=n;
      menor=n;
    }
    else
    {
      if(n>maior)
        maior=n;
      else
        if(n<menor)
          menor=n;
    }
  }
  printf("%d e o menor numero, ja %d e o maior numero\n", menor, maior);
}
