#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fora();
void ordem();

int main(void)
{
  srand(time(NULL));
  fora();
  ordem();

  return 0;
}

void fora()
{
  int v[10];
  int i;

  for(i=0;i<10;i++)
  {
    v[i]= rand()%100 +1;
    printf("%d\n", v[i]);
  }

  return;
  
}

void ordem()
{
  int v[10];
  int i, e, r;

  for(i=0; i<10; i++)
  {
    for(r=i+1; r<10; r++)
    {
      if(v[r]>v[i])
      {
        e=v[r];
        v[r]=v[i];
        v[i]=e;
      }
    }
  }
  printf("\nem ordem decrescente\n");
  for(i=0; i<10; i++)
    printf("%d\n", v[i]);

  return;
}
