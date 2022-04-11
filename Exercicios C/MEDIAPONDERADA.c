#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float n1, n2, n3, n4;
	
	printf ("Nota um: ");
	scanf ("%f", &n1);
	
	printf ("Nota dois: ");
	scanf ("%f", &n2);
	
	printf ("\nMedia Normal: ");
    n3 = (n1 + n2 ) / 2;
    printf ("%.2f", n3);

    printf ("\nPonderada: ");
    n4 = n1*0.3 + n2*0.7;
    printf ("%.2f", n4);
	
}
