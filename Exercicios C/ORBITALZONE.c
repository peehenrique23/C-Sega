#include <stdio.h>
#include <locale.h>
#include <time.h>

void orbita();

int main ()
{
	int y,z;
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	printf("                          Bem vindo ao C-Zone       \n\n");
	printf("                      =========================== ");
	printf ("\n\n                       Aperte ENTER para começar");
	z = getch();
	
	system ("cls");
	printf("                       Aperte ENTER para lançar seu foguete       \n\n");
	z = getch();
	system ("cls");
	sleep (2);
	printf ("                           Partindo do solo\n");
	printf ("\n\n\n");
	printf("= ");
	sleep (2);
	printf("                      == ");
	sleep (2);
	printf("                      === ");
	sleep (2);
	printf("                      ==== ");
	printf ("\n\n\n");
	
	sleep (3);
	y = (rand() % 10000);
	printf ("                        Velocidade atingida = %d.000 Km/h\n\n", y);
	
	if (y>30){
	printf ("                     Parabéns o seu foguete atingiu a órbita");
	sleep (5);
	system ("cls");
	orbita ();}
	
	else if (y<=30){
	printf ("                     Seu foguete não atingiu a órbita e caiu");
	
	}

}

void orbita (){
	
	int a;
	
	printf ("               Agora você está no espaço.\n\n");
	printf ("               Para onde deseja seguir?\n\n");
	printf ("               1 = Mercúrio\n");
	printf ("               2 = Vênus\n");
	printf ("               3 = Marte\n");
	printf ("               4 = Júpiter\n");
	printf ("               5 = Saturno\n");
	printf ("               6 = Urano\n");
	printf ("               7 = Netuno\n");
	printf ("                 = ");
	scanf ("%d", &a);
	
}
