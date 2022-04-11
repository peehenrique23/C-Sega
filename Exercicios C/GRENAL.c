#include <stdio.h>

int main()
{
	int golsinter, golsgremio,cont=0, cont2=0, cont3=0, soun, cont4=0;
	
	do
    {
    scanf ("%d",&golsinter);
	scanf ("%d",&golsgremio);
	if (golsgremio>golsinter){
	cont++;}
	else if (golsinter>golsgremio) {
	cont2++;}
	else if (golsinter==golsgremio) {
	cont4++;
	}
	
	printf ("Novo grenal (1-sim 2-nao)\n");
	scanf ("%d", &soun);
	cont3++;
    }while (soun==1);
    
    printf ("%d grenais\n", cont3);
    printf ("inter:%d\n", cont2);
    printf ("gremio:%d\n", cont);
    printf ("empate:%d\n", cont4);
    
    if (cont2>cont){
    printf ("Inter venceu mais\n");}
    else if (cont>cont2){
    printf ("Gremio venceu mais\n");}
    
	return 0;
	
	}
	

	

	
	
