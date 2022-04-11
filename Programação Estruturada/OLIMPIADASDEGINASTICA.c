#include <stdio.h>
#include <time.h>

void posmenu();
void atletas(int *n1);

int main (){
	
	int enter;
	
	printf ("\t\tBem vindo a pontuacao de Ginastica Olimpica\n\n");
	do{
	printf ("\t\t\tAperte Enter para acessar");
	enter = getch();
	}while (enter != 13);
	
	system ("cls");
	
	posmenu();}
	
	void posmenu (){
	
	int qtd;
	
	printf ("\t\t\tDigite a qtd de atletas = ");
	scanf ("%d", &qtd);
	
	int vetor = qtd;
	
	atletas(vetor);
	
	printf ("\n\t\t\tCalculando a(s) media(s). Aguarde..");}
	
	void atletas(int *n1){
	printf ("%d", n1);
	
	}
	
	
	
	
	
	
