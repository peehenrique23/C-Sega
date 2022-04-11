#include <stdio.h>

void saudacao();
void imprimirCSega();
void imprimirMemoria();
void imprimirVelha();
void imprimirForca();
void imprimirMatematica();
void divisor();
void limparTela();

int main() {
    int op, sair = 1;   
  
    while(sair) {
        limparTela();

        imprimirCSega();

        saudacao();
        divisor();

        imprimirMemoria();
        divisor();
        imprimirVelha();
        divisor();
        imprimirMatematica();
        divisor();
        imprimirForca();
        divisor();

        printf(">> ");

        scanf("%d", &op);

        switch(op) {
            case 1:
                limparTela();
                system("jogoDaMemoria.exe");
                break;

            case 2:
                limparTela();
                system("jogoDaVelha.exe");
                break;

            case 3:
                limparTela();
                system("jogoDeMatematica.exe");
                break;

            case 4:
                limparTela();
                system("jogoDaForca.exe");
                break;

            case 5:
                sair = 0;
                break;
        }
    }
    
    return 0;
}

void imprimirCSega() {
    printf("\t  ___   ___ ___ ___   _   \n");
    printf("\t / __| / __| __/ __| /_\\  \n");
    printf("\t| (__  \\__ \\ _| (_ |/ _ \\ \n");
    printf("\t \\___| |___/___\\___/_/ \\_\\\n");              
}

void imprimirMemoria() {
    printf("[1] - Jogo da memoria\n");
    printf("\t12 34 37 42 42 87\n\n");
}

void imprimirVelha() {
    printf("[2] - Jogo da velha\n");
    printf("\t+-----------+\n");
    printf("\t| x |   |   |\n");
    printf("\t|---+---+---|\n");
    printf("\t|   |   |   |\n");
    printf("\t|---+---+---|\n");
    printf("\t|   | O |   |\n");
    printf("\t+-----------+\n\n");
}

void imprimirMatematica() {
    printf("[3] - Jogo de matematica\n");
    printf("\t2 * 3 + 5 * 4 = 26\n\n");
}

void imprimirForca() {
    printf("[4] - Jogo da forca\n");
printf("\t+--------+\n");
printf("\t|        |\n");
printf("\t|       +-+      z\n");
printf("\t|       +-+      x\n");
printf("\t|       /|\\      d\n");
printf("\t|      / | \\     f\n");
printf("\t|       /        w\n");
printf("\t|      /          \n");
printf("\t|\n");
printf("\t======================\n\n");
}

void saudacao() {
    printf("\n\n\tOla! Bem vindo ao C SEGA.\n");
    printf("\tPressione \'5\' para sair,\n");
    printf("\tSelecione um joga abaixo.\n\n");
}

void divisor() {
    printf("-------------------------------------------\n\n");
}

void limparTela() {
    system("cls");
}
