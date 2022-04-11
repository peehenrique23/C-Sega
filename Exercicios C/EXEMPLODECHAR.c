#include <stdio.h>
#include <string.h>

int main ()

{
	char nome [21];
	char nome1 [21];
	char nome2 [21];
	
	scanf ("%s", nome);
	scanf ("%s",nome1);
	scanf ("%s",nome2);
	
	if (strcmp (nome,"vertebrado") == 0){
	if (strcmp (nome1,"ave") == 0)
	if (strcmp (nome2,"carnivoro") == 0)
	printf ("aguia\n");
	
	else if (strcmp (nome2,"onivoro") == 0)
	printf ("pomba\n");}
	
	if (strcmp (nome,"vertebrado") == 0){
	if (strcmp (nome1,"mamifero") == 0)
	if (strcmp (nome2,"onivoro") == 0)
	printf ("homem\n");
	
	else if (strcmp (nome2,"herbivoro") == 0)
	printf ("vaca\n");}
	
	if (strcmp (nome,"invertebrado") == 0){
	if (strcmp (nome1,"inseto") == 0)
	if (strcmp (nome2,"hematofago") == 0)
	printf ("pulga\n");
	
	else if (strcmp (nome2,"herbivoro") == 0)
	printf ("largarta\n");}
	
	if (strcmp (nome,"invertebrado") == 0){
	if (strcmp (nome1,"anelideo") == 0)
	if (strcmp (nome2,"hematofago") == 0)
	printf ("sanguessuga\n");
	
	else if (strcmp (nome2,"onivoro") == 0)
	printf ("minhoca\n");}
	
	return 0;
}
