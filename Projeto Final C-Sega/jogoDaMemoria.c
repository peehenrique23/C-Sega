//biblioteca. Para funcionamento das fun��es
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

//Declarando endere�os das fun��es
void easy();
void hard();
void menu();

//Fun��o principal. Entrada ao programa.
int main ()
{
	//Variaveis da fun��o pricipal
	int selec,z;
	
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	//Imprime Inicio Do Jogo
	
	printf("                       Bem vindo ao C-Memory       \n\n");
	printf("                      =========================== ");
	printf ("\n\n                       Aperte ENTER para come�ar");
	z = getch();
    system ("cls");
	menu();} 
    
    //Imprime Menu e recebe escolha de level do usuario
void menu(){
	
int selec;

	printf("                       ===Escolha seu nivel===\n\n");
	printf ("                        1 = Easy / 2 = Hard / = ");
	scanf("%d", &selec);
	fflush(stdin);
	
	//Direciona para a fun��o que contem o level escolhido pelo usuario
	
	switch(selec){
		
	// Se a tecla for 1, seguir para a fun��o void easy().
	case 1:
	easy();
	break;
	
	//Se a tecla for 2, seguir para a fun��o void hard ().
	case 2:
	hard ();
	break;
	
	//Se a tecla nao for nenhuma das acimas.
	default:
	system ("cls");
	menu();
	break;}}

    
    //Fun��o nivel Easy	
	void easy(){
		
	//Variaveis declaradas na fun��o 
	int number[5], resp[5];
	int i=0, ok=0, soun;
	
	printf ("\n");
	printf ("                       ===Decore e se divirta===\n\n");

    //imprime 5 numeros aleatorios
	for (i=0;i<5;i++){
	number[i] = (rand() % 90);
	printf ("          %d\t", number[i]);}
	printf("\n");
	sleep (7);
	system ("cls");
	
	//Dialogo com o usuario.
	printf ("                 ===Chegou a hora de testar sua mem�ria===\n");
	printf ("              ===Digite os n�meros fornecidos na tela anterior===\n");
	
	//Resposta do usuario.
	for (i=0; i<5; i++){
	scanf ("%d", &resp[i]);
	
	//Compara os numeros gerados pelo sistema e a resposta do usuario
	if(number[i]==resp[i]){
	//conta o numero de acertos.
	ok++;}
	}
	//Imprime os acertos.
	printf ("                         ====== %d Acertos =====\n\n", ok);
	
	//Verifica se usuario quer continuar no jogo
	printf ("                            Deseja retornar ao menu?\n                               1-SIM / 2-N�O= ");
	scanf ("%d", &soun); 
	if (soun==1){
	system ("cls");
	menu();
	}}
	
	// Fun��o nivel Hard
	void hard(){
	
	//Variaveis declaradas na fun��o 
	int number[10], resp[10];
	int i=0, ok=0, soun;
		
	printf ("\n");	
	printf ("                       ===Decore e se divirta===\n\n");

    //imprime 10 numeros aleatorios
	for (i=0;i<10;i++){
	number[i] = (rand() % 90);
	printf (" %d\t", number[i]);}
	printf ("\n");
	sleep (7);
	system ("cls");
	
	//Dialogo com o usuario.
	printf ("                 ===Chegou a hora de testar sua mem�ria===\n");
	printf ("              ===Digite os n�meros fornecidos na tela anterior===\n");

	//Resposta do usuario.
	for (i=0; i<10; i++){
	scanf ("%d", &resp[i]);
	
	//Compara os numeros gerados pelo sistema e a resposta do usuario
	if(number[i]==resp[i]){
	
	//conta o numero de acertos.
	ok++;}
	}
	//imprime os acertos.
	printf ("                         ====== %d Acertos =====\n\n", ok);
	
	//Verifica se usuario quer continuar no jogo
	printf ("                            Deseja retornar ao menu?\n                               1-SIM / 2-N�O= ");
	scanf ("%d", &soun); 
	if (soun==1){
	system ("cls");
	menu();}}
	
	
	
	
