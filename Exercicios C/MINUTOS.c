#include <stdio.h>

int main ()

{
	int A, B, C, D, SOMAR, SOMAR2;
	
	scanf ("%d", &A);
	scanf ("%d", &B);
	scanf ("%d", &C);
	scanf ("%d", &D);
	
	SOMAR = A+B;
	SOMAR2 = C+D;
	
	if (SOMAR2>SOMAR && B>C && D>A && C>0 && D>0 && A%2==0){
	printf ("Valores aceitos\n");}
    
    else {
    printf ("Valores nao aceitos\n");
	}
	
	return 0;
}
