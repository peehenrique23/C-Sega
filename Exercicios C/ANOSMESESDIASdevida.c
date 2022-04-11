#include <stdio.h>
#include <stdlib.h>

int main ()

{
	
	int n1, n2,n3;
	
	printf ("Que ano voce nasceu: ");
	scanf ("%i", &n1);
	
	printf ("\nAnos de vida: ");
	n2 = 2020 - n1;
	printf ("%i", n2);
	
	printf ("\nMeses de vida: ");
	n3 = n2 * 12;
	printf ("%i", n3);
	
	printf ("\nDias de vida: ");
	n3 = n2 * 365;
	printf ("%i", n3);
	
	printf ("\nHoras de vida: ");
	n3 = n2 * 8760;
	printf ("%i", n3);
	
	printf ("\nMinutos de vida: ");
	n3 = n2 * 525600;
	printf ("%i", n3);
	
	printf ("\nSemanas de vida: ");
	n3 = n2 * 52;
	printf ("%i", n3);
	
	printf ("\nEm 2050 sua idade sera:");
	n3 = 2050 - n1;
	printf ("%i", n3);
	
}
