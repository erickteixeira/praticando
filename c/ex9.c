#include <stdio.h>
#include <stdlib.h>


void pato(void);

int main(void)
{
 printf("bem vindo ao jogo do pato\n");
 printf("regrgas:\npara numeros multiplos de 4 ou que termina em 4 digite p e os demais digite n\n ");
 pato();
}

void pato(void)
{
  long int i;
  int x;
  char p;

  for(i=1<;i<4000000;i++)
  {
    printf("%d", i);
    scanf("%s", &p);

    if((i%4==0)||(i%10==4))
      switch(p)
      {
        case 'n':
          printf("bebe vinho, pato!!\n");
          i=50000000000;
        case 'p':
          break;
      }
  }
  return ;
}

