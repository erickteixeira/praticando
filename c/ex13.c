#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void validador(char cpf[11]);

int main(void)
{

  char cpf[11];

  printf("=== VALIDADOR DE CPF ====\n");
  printf("favor digite sei cpf (somente numeros)\n");
  scanf("%s", &cpf);
  validador(cpf);

  return 0;
}

void validador(char cpf[11])
{

  int d1, d2, s=0, n, r, c, i, aux;
  
  if(strlen(cpf)!=11)
    printf("NUMERO PEQUENO OU GRANDE DEMAIS, INVALIDO\n");
  else
    for(c = 0000000000; c<=99999999999; c+=11111111111)
      if(c==cpf[11])
      {
        printf("TODOS OS DIGITOS SAO IGUAIS, INVALIDO\n");
        aux=cpf[11]; 
        break;
      }
      else
      {
      
        /* encontrando o primeiro digito */
        s=0;
        for(i=0; i<9; i++)
        {
          n = cpf[i]-48;
          s+=(n*(10-i));
        }
        r= 11 - (s%11);
        if((r==10) || (r==11))
          d1 = '0';
        else
          d1 = r+48;


        /* encontrando o segundo digito */

        s=0;
        for(i=0; i<10; i++)
        {
          n=cpf[i]-48;
          s=+(n*(11-i));
        }
        r=11-(s%11);
        if((r==10)|| (r==11))
          d2 = '0';
        else
          d2 = r+48;
        /* imprimindo a validacao */

        if((d1==cpf[9])&&(d2==cpf[10]))
          printf("CPF VALIDO\n");
        else
          printf("CPF INVALIDO\n");

        return;
      }
}
