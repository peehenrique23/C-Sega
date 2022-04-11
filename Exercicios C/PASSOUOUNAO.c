#include <stdio.h>
#include <stdlib.h>

int main ()

{
	
	int n1, n2, n3, n4, n5, n6, n7;
	
	printf ("Digite a nota da Prova 1: ");
	scanf ("%i", &n1);
	
	printf ("Digite a nota da Prova 2: ");
	scanf ("%i", &n2);
	
	printf ("\nDigite quantas faltas: ");
	scanf ("%i", &n4);
	
    printf ("Media: ");
	n3 = ((4*n1)+(6*n2)) / 10;
	printf ("%i", n3);
	
	
	if (n3<=5){
	printf ("\nREPROVOU POR NOTA");
	printf ("\nNOTA DO EXAME:");
	scanf ("%i", &n5);
	printf ("\nQUAL PROVA VOCE QUER SUBSTITUIR");
	printf ("\n1 OU 2: ");
	scanf ("%i", &n6);
    }
    if (n6==1){
    printf ("\nMEDIA: ");
    n7 = ((4*n2)+(6*n5)) / 10;
    printf ("%i", n7);}
    
    if (n6==2){
    printf ("\nMEDIA: ");
    n7 = ((4*n1)+(6*n5)) / 10;
    printf ("%i", n7);
	}
	
	if (n7<=5){
	printf ("\nREPROVOU POR NOTA!!");
	}
	
	else if (n4>21){
	printf ("\nREPROVOU POR FALTA");}
	
	else {
	printf ("\nAPROVADO");
    }
    
    
    

	
	
}
