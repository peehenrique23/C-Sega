#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int n1, n2, n3;
	
	printf ("Quantos km vai ser rodado: ");
	scanf ("%i", &n1);
	
	printf ("Quantos litros por km: ");
	scanf ("%i", &n2);
	
	printf ("Seu tanque vai precisar de: ");
	n3= n1/n2;
	printf ("%i Litros", n3);
	
	
}
