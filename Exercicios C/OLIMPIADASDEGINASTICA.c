#include <stdio.h>

int main ()

{
	int atleta, melhorN, piorN, inferioracinco=0;
	float media1, n1, n2, n3, n4;
	
	printf ("Pontuacao Ginastica Olimpica\n\n");
	
	for (atleta=1 ; atleta <= 15 ; atleta++){
	printf ("\nAtleta %d", atleta);
	printf ("\nPrimeira Nota: ");
	scanf ("%f", &n1);
	printf ("Segunda Nota: ");
	scanf ("%f", &n2);
	printf ("Terceira Nota: ");
	scanf ("%f", &n3);
	
	n4= n1+n2+n3;
	media1=n4/3;
	printf ("Media: %.2f \n ", media1);
    
    if (n1>n2 && n1>n3){
	melhorN = n1;
	printf ("Melhor nota: %d\n", melhorN);}

    else if (n2>n1 && n2>n3){
    
    melhorN = n2;
    printf ("Melhor nota: %d\n", melhorN);}
    
    else if(n3>n2 && n3>n1){
    
    melhorN = n3;
    printf ("Melhor nota: %d\n", melhorN);}
    
    if (n1<n2 && n1<n3){
    piorN = n1;
    printf ("Pior nota: %d\n", piorN);}
    
    else if (n2<n1 && n2<n3){
    piorN = n2;
    printf ("Pior nota: %d\n", piorN);}
    
    else if (n3<n2 && n3<n1){
    piorN = n3;
    printf ("Pior nota: %d\n", piorN);}
    
    
    if (n1 && n2 && n3 <= 4 ){
    ++inferioracinco;}
	}
    printf ("\natletas que teve a pontuacao menor que cinco: %d", inferioracinco);
   }
     
	


