#include <stdio.h>
#include <time.h>
#include <locale.h>

void faculdade();

int main (){
	
	int n1,n2, n3=0;
	
	setlocale(LC_ALL, "");
	
	//Receber primeira nota
	printf ("primeira nota: ");
	scanf ("%d", &n1);
	if (n1>=11){
	sleep (1);
	printf ("Nota inválida. Digite dnv");
	sleep (3);
	system ("cls");
	main ();}
	
	//Receber segunda nota
	printf ("segunda nota: ");
	scanf ("%d", &n2);
	if (n2>=11){
	sleep (1);
	printf ("Nota inválida. Digite dnv");
	sleep (3);
	system ("cls");
	main ();}
	
	//Media das duas notas
	n3 = n1+n2;
	printf ("media:%d", n3/2);
	
	if (n3<5){
	printf ("\nreprovado");
	}
	else if (n3>5) {
	system ("cls");
	faculdade ();
	}}

    void faculdade (){
    printf ("Agora escolha uma faculdade");
	}



