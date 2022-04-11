#include <stdio.h>
#include <locale.h>

int main ()


{
	setlocale (LC_ALL, "");
	int soun, soun2, idade, continuar, contidade=0, contmedia=0;
	float media=0;
	
	printf ("\nGostaria de participar da pesquisa? 1 - SIM OU 2 - NÃO \n ");
	scanf ("%d", &soun);
	
	if (soun == 2){
	printf ("\nQUE PENA =(\n");}
	
    while (soun == 1){
	
	printf ("\nGosta de perfume com cheiro de fruta? 1 - SIM OU 2 - NÃO \n");
	scanf ("%d", &soun2);
	
	printf ("\nQual sua idade? \n ");
	scanf ("%d", &idade);
	media += idade;
	++contmedia;
	
	if (idade < 40 && soun2 == 1){
    ++contidade;}
	
	printf ("\ndeseja continuar? 1- SIM ou 2- NAO \n ");
    scanf ("%d", &continuar);
    
    if (continuar == 1){
	}
    if (continuar == 2){
	printf ("OBRIGADO =)\n");
	break;
	}
	
    }
printf ("\nPessoas com menos de 40 anos q gostam de perfume com cheiro de fruta: %d", contidade);
media = media / contmedia;
printf ("\nMédia de idade das pessoas entrevistadas: %.2f", media);
}
