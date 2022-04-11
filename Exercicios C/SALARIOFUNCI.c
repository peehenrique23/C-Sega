#include <stdio.h>

int main ()

{
	char nome [21];
	float SALARIOFIXO, VENDASNOMES, SOMA, SOMA1;
    
    scanf ("%s", &nome);
    scanf ("%f", &SALARIOFIXO);
    scanf ("%f", &VENDASNOMES);
    
    SOMA = VENDASNOMES * 15/100;
    
    SOMA1 = SOMA + SALARIOFIXO;
    
    printf ("TOTAL = R$ %.2f", SOMA1);
    
	

	
}


