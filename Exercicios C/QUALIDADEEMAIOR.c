#include <stdio.h>
#define P 3



int main ()

{
  char nomes [P][40];
  int idade [P];
  
  int i;
  int maior =0 ;
  int iv = -1;

  for(i=0; i<P; i++){
  	
  printf ("\nDigite o nome: ");
 
  gets (nomes[i]);
  
  printf ("Digite sua idade: ");
  scanf ("%d", &idade[i]);
  
  if (idade[i]>maior){
  maior = idade[i];
  iv = i;
  }
  
}

for (i=0; i<P; i++)
{
   printf ("\n%s - %d", nomes[i], idade [i]);
}
   printf ("\nA pessoa mais velha é o(a) %s, com %d anos");

return 0;
}


