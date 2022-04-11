//bibliotecas. Para funcionamento das funções
#include <stdio.h>
#include <locale.h>
#include <time.h>

//Declarando endereço das funções 
void soma();
void sub();
void divi();
void multi();
void ultra();
void menu();

    // Função principal. Entrada ao programa
int main ()
{
	
	int selec,z;
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	//Imprime Inicio Do Jogo
	printf ("\n\n\n");
	printf("                       Bem vindo ao Nitro(Gênio)      \n\n");
	printf("                      =========================== ");
	printf ("\n\n                       Aperte ENTER para começar");
	z = getch();
	system ("cls");
	menu();}
	
	//Nessa função contém menu
	void menu(){
	int selec;
	
	//Imprime menu e recebe a operação escolhida pelo usuario.
	printf ("\n\n\n");
	printf("                       ===Escolha uma operação===\n\n");
	printf ("                  1 = Soma / 2 = Subtração / 3 = Divisão\n");
	printf ("                  4 = Multiplicação / 5 = Hardcore / = ");
	scanf("%d", &selec);
	fflush(stdin);
	
	//Direciona as funções conforme a tecla recebida pelo usuario.
	switch(selec){
	// Se a tecla for 1, seguir para a função void soma().
	case 1:
	soma();
	break;
	
	//Se a tecla for 2, seguir para a função void sub ().
	case 2:
	sub();
	break;
	
	//Se a tecla for 3, seguir para a função void divi ().
	case 3:
	divi();
	break;
	
	//Se a tecla for 4, seguir para a função void multi().
	case 4:
	multi();
	break;
	
	//Se a tecla for 5, seguir para a função void ultra().
	case 5:
	ultra();
	break;
	
	//Se a tecla nao for nenhuma das acimas.
	default:
	system("cls");
	menu();
	break;}}
	
	
	//Endereço da função soma.
	void soma(){
    
	//Variaveis declaradas na função	
	int number1, number2, number3, number4;
	int i=0, soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 90.
	number1 = (rand() % 90);
	number2 = (rand() % 90);
	number3 = (rand() % 90);
	number4 = (rand() % 90);
	
    //Imprime os numeros aleatorios. E define a operação matematica. Depois de 5s muda de tela.		
	printf ("\n\n");
	printf ("                           %d + %d + %d + %d", number1, number2, number3, number4);
	soma1 = number1 + number2 + number3 + number4;
	sleep (5);
	system ("cls");
	
	//Imprime instruções aos usuarios. E recebe o resultado da operação do usuario.
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da soma é= ");
	scanf ("%d", &recebe);
	
	//Condição= Usuario acertou. Imprime informação ao usuario e recebe a informação.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parabéns você venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condição = Usuario errou. Sequencia de instruções ao usuario, e recolhe decisão de continuar.	
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
    
	//Se a reposta for continuar. Voltar a função menu().	
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}
	

    //Endereço da função subtração
    void sub(){
    	
    //Variaveis declaradas na função
    int number1, number2, number3, number4;
	int soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 500.
	number1 = (rand() % 500);
	//Fornece numero aleatorio de 0 a 50.
	number2 = (rand() % 50);
	number3 = (rand() % 50);
	number4 = (rand() % 50);
	
    //Imprime os numeros aleatorios. E define a operação matematica. Depois de 5s muda de tela.	
	printf ("\n\n");
	printf ("                          %d - %d - %d - %d", number1, number2, number3, number4);
	soma1 = number1 - number2 - number3 - number4;
	sleep (5);
	
	//Imprime instruções aos usuarios. E recebe o resultado da operação do usuario.
	system ("cls");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da subtração é= ");
	scanf ("%d", &recebe);
	
	//Condição= Usuario acertou. Imprime informação ao usuario e recebe a informação.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parabéns você venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condição = Usuario errou. Sequencia de instruções ao usuario, e recolhe decisão de continuar.	
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}
	

    //Endereço da função divisão
    void divi(){
    	
    //Variaveis declaradas na função	
    int number1, number2, number3;
	int soma1, recebe, soun;
	//Fornece numero aleatorio de 0 a 500.
	number1 = (rand() % 500);
	//Fornece numero aleatorio de 0 a 50.
	number2 = (rand() % 50);
	//Fornece numero aleatorio de 0 a 10.
	number3 = (rand() % 10);

    //Imprime os numeros aleatorios. E define a operação matematica. Depois de 7s muda de tela.
	printf ("\n\n");
	printf ("                         %d / %d / %d", number1, number2, number3);
	soma1 = number1 / number2 / number3;
	sleep (7);
	
	//Imprime instruções aos usuarios. E recebe o resultado da operação do usuario.
	system ("cls");
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado da divisão é= ");
	scanf ("%d", &recebe);
	
	//Condição= Usuario acertou. Imprime informação ao usuario e recebe a informação.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parabéns você venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}

    //condição = Usuario errou. Sequencia de instruções ao usuario, e recolhe decisão de continuar.	
	else {
	printf ("\n\n");
    printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}

    //Endereço da função Multiplicação
    void multi(){
    
	//Variaveis declaradas na função
	int number1, number2, number3;
	int soma1, recebe, soun;
	
	//Fornece numero aleatorio de 0 a 30.
	number1= (rand() % 30);
	//Fornece numero aleatorio de 0 a 10.
	number2 = (rand() % 10);
	//Fornece numero aleatorio de 0 a 200.
	number3 = (rand() % 200);
	
	//Imprime os numeros aleatorios. E define a operação matematica. Depois de 8s muda de tela.
	printf ("\n");
	printf ("                              %d x %d x %d", number1, number2, number3);
	soma1 = number1 * number2* number3;
	sleep (8);
	system ("cls");
	
	//Imprime instruções aos usuarios. E recebe o resultado da operação do usuario.
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                       O resultado da multiplicação é= ");
	scanf ("%d", &recebe);
	
	//Condição= Usuario acertou. Imprime informação ao usuario e recebe a informação.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parabéns você venceu===\n\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//Se a reposta for continuar. Voltar a função menu().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condição = Usuario errou. Sequencia de instruções ao usuario, e recolhe decisão de continuar.
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	// condição = Usuario quer continuar. Volta para a função menu ().
	if (soun==1){
	system("cls");
	menu();
	}
	printf ("\n\n\n\n\n\n\n\n\n");
	}
	}
	

    //Endereço da função Ultra
    void ultra(){
    	
    //Variaveis declaradas
    int number1, number2, number3, number4, number0 ;
	int soma1, recebe, soun;
	
	//gera aleatoriamente numero de 0 até 8000.
	number0 = (rand() % 8000);
	//gera aleatoriamente numero de 0 até 100.
	number1 = (rand() % 100);
	number2 = (rand() % 100);
	number3 = (rand() % 100);
	number4 = (rand() % 100);

	//Imprime os numeros aleatórios. E define as operações matematicas. Depois de 10s muda de tela.
	printf ("\n");
	printf ("                       %d - %d x %d + %d x %d",number0, number1, number2, number3, number4);
	soma1 = number0 - number1 * number2 + number3 * number4;
	sleep (10);
	
	system ("cls");
	
	//sequencia de instruções ao usuario,e recolhe valor da operação
	printf ("              Obs: Digitar resultado sem virgula ou ponto, se houver");
	printf ("\n\n\n");
	printf ("                 ===Chegou a hora de testar a sua genialidade===\n");
	printf ("\n\n");
	printf ("                          O resultado dos numeros é= ");
	scanf ("%d", &recebe);
	
	//condição. Usuario acertou.
	if (soma1==recebe){
	printf ("\n\n");
	printf ("                         ===Parabéns você venceu===");
	
	//decisão do usuario seguir ou não.
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	//condição. Usuario quer contiuar, volta para a função menu.
	if (soun==1){
	system("cls");
	menu();}
	
	printf ("\n\n\n\n\n\n\n\n\n");}
	
	//condição = Usuario errou. Sequencia de instruções ao usuario, e recolhe decisão de continuar.
	else {
	printf ("\n\n");
	printf ("                          Errou. Resultado correto= %d\n", soma1);
	printf ("\n");
	printf ("                      Deseja retornar ao menu principal?\n                                1-SIM / 2-NÃO = ");
	scanf ("%d", &soun);
	
	// condição = Usuario quer continuar. Volta para a função menu ().
	if (soun==1){
	system("cls");
	menu();}
	printf ("\n\n\n\n\n\n\n\n\n");}}



