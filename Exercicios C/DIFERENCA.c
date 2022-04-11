#include <stdio.h>

int main ()

{
	int A,B,C,D;
	float SOMA1;
	
	scanf ("%d", &A); // numero funcionario
	
	scanf ("%d", &B); // nmr horas trablhadas
	
	scanf ("%d", &C); // valor que recebe por hora
	
	printf ("NUMBER = %d\n", A);
	
	SOMA1 = B*C;
	
	printf ("SALARY = U$ %.2f\n", SOMA1);
	
	return 0;
	
}


