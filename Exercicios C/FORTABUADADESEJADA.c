#include <stdio.h>

int main ()

{
	int t, x;
	
        printf ("Informe a tabuada: ");
		scanf ("%d", &x);
		
	for (t=1; t <= 10 ; t++)
	{
		printf ("\n%d x %d = %d", x, t, x*t );
		
		
	}
	
	return 0;
}

