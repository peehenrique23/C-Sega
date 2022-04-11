#include <stdio.h>
#include <locale.h>

int main ()

{
	setlocale (LC_ALL, "");
	
	int soun, estcivil, cont, alt, contaltura=0, conestadocivil=0;
	
	printf ("\nGostaria de participar da pesquisa? 1 - SIM OU 2 - NÃO\n ");
	scanf ("%d", &soun);
	
	if (soun == 2){
	printf ("\nQUE PENA =(\n");}
	
	while (soun == 1){
	
	printf ("\nQual sua altura? Digite sem ponto ou virgula \n");
	scanf ("%d", &alt);
	if (alt >= 160)
	++contaltura;
	
	printf ("\nEstado civil? \n1 - Casado (a) \n2 - Solteiro (a) \n3 - Divorciado (a)\n ");
	scanf ("%d", &estcivil);
	if (estcivil == 1)
	++conestadocivil;
	
	printf ("\nDeseja continuar? 1 - SIM ou 2 - NÃO\n");
	scanf ("%d", &cont);

    if (cont== 2){
	printf ("\nOBRIGADO =)\n");
	break;
	}
}
	printf ("\nQuantidade de alunos com mais 1,60 de altura: %d", contaltura);
	printf ("\nQuantidade de alunos casados %d", conestadocivil);
	
}
