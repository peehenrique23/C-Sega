#include <stdio.h>

int main ()

{
	int timegast, velo;
	float soma;
	
	scanf ("%d", &timegast);
	scanf ("%d", &velo);
	
	soma=12;
	soma = (timegast*velo/soma);
	
	printf ("%.3f", soma);
}
