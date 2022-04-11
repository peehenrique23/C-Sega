#include<stdio.h>

int main ()

{
	int diasrece, anos, meses, dias;
	
	scanf ("%d", &diasrece);
	

    anos = diasrece/365;
    printf ("%d ano(s)\n", anos);
    
    meses = diasrece%365 /30;
	printf ("%d mes(es)\n", meses);
    
    dias = diasrece%365 %30;
    printf ("%d dia(s)\n", dias);
    
}
