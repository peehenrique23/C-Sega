//bibliotecas. Para funcionamento das fun��es
#include <stdio.h>
#include <locale.h>
#include <time.h>

//Declarando endere�o das fun��es 
void soma();
void sub();
void divi();
void multi();
void ultra();
void menu();

    // Fun��o principal. Entrada ao programa
int main ()
{
	
	int selec,z;
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	//Imprime Inicio Do Jogo
	printf ("\n\n\n");
	printf("                       Bem vindo ao Nitro(G�nio)      \n\n");
	printf("                      =========================== ");
	printf ("\n\n                       Aperte ENTER para come�ar");
	z = getch();
	system ("cls");
	menu();}
	
	//Nessa fun��o cont�m menu
	void menu(){
	int selec;
	
	//Imprime menu e recebe a opera��o escolhida pelo usuario.
	printf ("\n\n\n");
	printf("                       ===Escolha uma opera��o===\n\n");
	printf ("                  1 = Soma / 2 = Subtra��o / 3 = Divis�o\n");
	printf ("                  4 = Multiplica��o / 5 = Hardcore / = ");
	scanf("%d", &selec);
	fflush(stdin);
	
	//Direciona as fun��es conforme a tecla recebida pelo usuario.
	switch(selec){
	// Se a tecla for 1, seguir para a fun��o void soma().
	case 1:
	soma();
	break;
	
	//Se a tecla for 2, seguir para a fun��o void sub ().
	case 2:
	sub();
	break;
	
	//Se a tecla for 3, seguir para a fun��o void divi ().
	case 3:
	divi();
	break;
	
	//Se a tecla for 4, seguir para a fun��o void multi().
	case 4:
	multi();
	break;
	
	//Se a tecla for 5, seguir para a fun��o void ultra().
	case 5:
	ultra();
	break;
	
	//Se a tecla nao for nenhuma das acimas.
	default:
	system("cls");
	menu();
	break;}}
	
	
	//Endere�o da fun��o soma.
	void soma(){
    
	//Variaveis declaradas na fun��o	
	int number1, number2, number3, number4;
	int i=0, soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 90.
	number1 = (rand() % 90);
	number2 = (rand() % 90);
	number3 = (rand() % 90);
	number4 = (rand() % 90);
	
    //Imprime os numeros aleatorios. E define a opera��o matematica. Depois de 5s muda de tela.		
	printf ("\n\n");
	printf ("                           %d + %d + %d + %d", number1, number2, number3, number4);
	soma1 = number1 + number2 + number3 + number4;
	sleep (5);
	system ("cls");
	
	//Imprime instru��es aos usuarios. E recebe o resultado da opera��o do usuario.
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da soma �= ");
	scanf ("%d", &recebe);
	
	//Condi��o= Usuario acertou. Imprime informa��o ao usuario e recebe a informa��o.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parab�ns voc� venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condi��o = Usuario errou. Sequencia de instru��es ao usuario, e recolhe decis�o de continuar.	
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
    
	//Se a reposta for continuar. Voltar a fun��o menu().	
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}
	

    //Endere�o da fun��o subtra��o
    void sub(){
    	
    //Variaveis declaradas na fun��o
    int number1, number2, number3, number4;
	int soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 500.
	number1 = (rand() % 500);
	//Fornece numero aleatorio de 0 a 50.
	number2 = (rand() % 50);
	number3 = (rand() % 50);
	number4 = (rand() % 50);
	
    //Imprime os numeros aleatorios. E define a opera��o matematica. Depois de 5s muda de tela.	
	printf ("\n\n");
	printf ("                          %d - %d - %d - %d", number1, number2, number3, number4);
	soma1 = number1 - number2 - number3 - number4;
	sleep (5);
	
	//Imprime instru��es aos usuarios. E recebe o resultado da opera��o do usuario.
	system ("cls");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da subtra��o �= ");
	scanf ("%d", &recebe);
	
	//Condi��o= Usuario acertou. Imprime informa��o ao usuario e recebe a informa��o.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parab�ns voc� venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condi��o = Usuario errou. Sequencia de instru��es ao usuario, e recolhe decis�o de continuar.	
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}
	

    //Endere�o da fun��o divis�o
    void divi(){
    	
    //Variaveis declaradas na fun��o	
    int number1, number2, number3;
	int soma1, recebe, soun;
	//Fornece numero aleatorio de 0 a 500.
	number1 = (rand() % 500);
	//Fornece numero aleatorio de 0 a 50.
	number2 = (rand() % 50);
	//Fornece numero aleatorio de 0 a 10.
	number3 = (rand() % 10);

    //Imprime os numeros aleatorios. E define a opera��o matematica. Depois de 7s muda de tela.
	printf ("\n\n");
	printf ("                         %d / %d / %d", number1, number2, number3);
	soma1 = number1 / number2 / number3;
	sleep (7);
	
	//Imprime instru��es aos usuarios. E recebe o resultado da opera��o do usuario.
	system ("cls");
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da divis�o �= ");
	scanf ("%d", &recebe);
	
	//Condi��o= Usuario acertou. Imprime informa��o ao usuario e recebe a informa��o.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parab�ns voc� venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}

    //condi��o = Usuario errou. Sequencia de instru��es ao usuario, e recolhe decis�o de continuar.	
	else {
	printf ("\n\n");
    printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}

    //Endere�o da fun��o Multiplica��o
    void multi(){
    
	//Variaveis declaradas na fun��o
	int number1, number2, number3;
	int soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 30.
	number1= (rand() % 30);
	//Fornece numero aleatorio de 0 a 10.
	number2 = (rand() % 10);
	//Fornece numero aleatorio de 0 a 200.
	number3 = (rand() % 200);
	
	//Imprime os numeros aleatorios. E define a opera��o matematica. Depois de 8s muda de tela.
	printf ("\n");
	printf ("                              %d x %d x %d", number1, number2, number3);
	soma1 = number1 * number2* number3;
	sleep (8);
	system ("cls");
	
	//Imprime instru��es aos usuarios. E recebe o resultado da opera��o do usuario.
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                       O resultado da multiplica��o �= ");
	scanf ("%d", &recebe);
	
	//Condi��o= Usuario acertou. Imprime informa��o ao usuario e recebe a informa��o.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parab�ns voc� venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a fun��o menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condi��o = Usuario errou. Sequencia de instru��es ao usuario, e recolhe decis�o de continuar.
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	// condi��o = Usuario quer continuar. Volta para a fun��o menu ().
	if (soun==1){
	system("cls");
	menu();
	}
	printf ("\n\n\n\n\n\n\n\n\n");
	}
	}
	

    //Endere�o da fun��o Ultra
    void ultra(){
    	
    //Variaveis declaradas
    int number1, number2, number3, number4, number0 ;
	int soma1, recebe, soun;
	
	//gera aleatoriamente numero de 0 at� 8000.
	number0 = (rand() % 8000);
	//gera aleatoriamente numero de 0 at� 100.
	number1 = (rand() % 100);
	number2 = (rand() % 100);
	number3 = (rand() % 100);
	number4 = (rand() % 100);

	//Imprime os numeros aleat�rios. E define as opera��es matematicas. Depois de 10s muda de tela.
	printf ("\n");
	printf ("                       %d - %d x %d + %d x %d",number0, number1, number2, number3, number4);
	soma1 = number0 - number1 * number2 + number3 * number4;
	sleep (10);
	
	system ("cls");
	
	//sequencia de instru��es ao usuario,e recolhe valor da opera��o
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado dos numeros �= ");
	scanf ("%d", &recebe);
	
	//condi��o. Usuario acertou.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parab�ns voc� venceu===");
	
	//decis�o do usuario seguir ou n�o.
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	//condi��o. Usuario quer contiuar, volta para a fun��o menu.
	if (soun==1){
	system("cls");
	menu();}
	
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condi��o = Usuario errou. Sequencia de instru��es ao usuario, e recolhe decis�o de continuar.
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-N�O = ");
	scanf ("%d", &soun);
	
	// condi��o = Usuario quer continuar. Volta para a fun��o menu ().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}



