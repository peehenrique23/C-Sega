#include<stdio.h>
#include<stdlib.h>

int main()

{
	
double salario;
char porcento = '%';

printf ("Digite seu salario: ");
scanf ("%lf", &salario);

if (salario>0)
if (salario <= 1450)
printf ("Melhore a sua remuneracao");

if(salario >1450)
if (salario <= 2750)
printf ("Aumento de 20" "%c", porcento);

if (salario >= 4750)
printf ("Aumento de 17" "%c", porcento); 




}
