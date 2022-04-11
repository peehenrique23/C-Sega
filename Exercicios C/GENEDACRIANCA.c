#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int n1, n2, n3;
	
	printf (" Genero da crianca \n Masculino = 0 \n Feminino  = 1 \n = ");
	scanf ("%i", &n1);
	
	printf ("\n A mae e portadora do gene? \n sim = 1 \n nao = 0 \n = ");
	scanf ("%i", &n2);
	
	printf ("\n O pai e portador do gene? \n sim = 1 \n nao = 0 \n = ");
	scanf ("%i", &n3);
	
	if (n1==0 && n2==1 && n3==0 || n1==1 && n2==1 && n3==1)
	{
	printf ("A Crianca e daltonica");
    }
    
    else {
    printf ("\n A crianca nao e daltonica");
	}
	
	
}
