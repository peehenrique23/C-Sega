#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERODEPALAVRAS 4

int perguntar(char *pergunta);
char lerLetra();
void imprimirJogo(int topLetrasErradas, char *letrasErradas, int topLetrasCertas, char *letrasCertas, char *questao);
int escolherPalavra(int *palavrasJaEscolhdas);
int verificarLetra(char *palavra, char letra, char *letrasCertas);
void limparTela();

int main() {
    setlocale(LC_ALL, "");

    int sair;

    char listaDePalavras[NUMERODEPALAVRAS][15] = {"tomate", "janeiro", "taxi", "terra"};
    char listaDeQuestoes[NUMERODEPALAVRAS][30] = {"Salada", "Mes do ano", "Leva pessoas", "Esta abaixo de todos"};

    char questao[30], palavra[15], letra;
    int topLetrasErradas = 0, topLetrasCertas = 0;
    int numeroDaPalavra, estadoDaLetra;
    int palavrasJaUsadas[NUMERODEPALAVRAS] = {-1, -1, -1, -1}, topPalavrasJaUsadas = 0;

    do {
        char letrasErradas[6] = {' ', ' ', ' ', ' ', ' ', ' '};
        char letrasCertas[10] = {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_'};
        topLetrasErradas = 0, topLetrasCertas = 0;

        if(topPalavrasJaUsadas == NUMERODEPALAVRAS) {
            limparTela();
            perguntar("\nParabens! Voce completou o jogo.\nPressione (s) para sair ");
            break;
        }

        numeroDaPalavra = escolherPalavra(palavrasJaUsadas);
        palavrasJaUsadas[topPalavrasJaUsadas++] = numeroDaPalavra;
        strcpy(questao, listaDeQuestoes[numeroDaPalavra]);
        strcpy(palavra, listaDePalavras[numeroDaPalavra]);
        letrasCertas[strlen(palavra)] = '\0';

        for(;;) {            
            imprimirJogo(topLetrasErradas, letrasErradas, topLetrasCertas, letrasCertas, questao);    
            letra = lerLetra();

            estadoDaLetra = verificarLetra(palavra, letra, letrasCertas);
            if(estadoDaLetra) {
                topLetrasCertas += estadoDaLetra;
                if(topLetrasCertas == strlen(palavra)) {
                    imprimirJogo(topLetrasErradas, letrasErradas, topLetrasCertas, letrasCertas, questao);
                    sair = perguntar("Você ganhou!\nQuer jogar de novo? (s/n) ");
                    break;
                }
            }
            else {
                letrasErradas[topLetrasErradas] = letra;
                topLetrasErradas++;
                if(topLetrasErradas == 6) {
                    imprimirJogo(topLetrasErradas, letrasErradas, topLetrasCertas, letrasCertas, questao);
                    printf("A resposta era: %s\n", palavra);
                    sair = perguntar("Voce perdeu!\nQuer tentar de novo? (s/n) ");
                    break;
                }
            }
        }
    } while(sair);

    return 0;
}

int perguntar(char *pergunta) {
    char resposta;

    printf("%s", pergunta);

    for(;;) {
        resposta = getchar();

        if(resposta == 's') return 1;
        else if(resposta == 'n') return 0;
    }
}

char lerLetra() {
    char letra;

    fflush(stdin);
    printf("Letra> ");
    letra = getchar();

    return letra;
}

void imprimirJogo(int topLetrasErradas, char *letrasErradas, int topLetrasCertas, char *letrasCertas, char *questao) {
    int i;

    limparTela();

    printf("+--------+\n");
    printf("|        |\n");
    printf("|       %s      %c\n", topLetrasErradas > 0 ? "+-+" : "   ", letrasErradas[0]);
    printf("|       %s      %c\n", topLetrasErradas > 0 ? "+-+" : "   ", letrasErradas[1]);
    printf("|       %s%s%s      %c\n", topLetrasErradas > 2 ? "/" : " ", topLetrasErradas > 1 ? "|" : " ", topLetrasErradas > 3 ? "\\" : " ", letrasErradas[2]);
    printf("|      %s %s %s     %c\n", topLetrasErradas > 2 ? "/" : " ", topLetrasErradas > 1 ? "|" : " ", topLetrasErradas > 3 ? "\\" : " ", letrasErradas[3]);
    printf("|       %s %s      %c\n", topLetrasErradas > 4 ? "/" : " ", topLetrasErradas > 5 ? "\\" : " ", letrasErradas[4]);
    printf("|      %s   %s     %c\n", topLetrasErradas > 4 ? "/" : " ", topLetrasErradas > 5 ? "\\" : " ", letrasErradas[5]);
    printf("|\n");
    printf("============================\n");

    printf("   %s\n   ", questao);

    for(i = 0; letrasCertas[i] != '\0'; i++)
        printf("%c ", letrasCertas[i]);

    printf("\n\n");
}

int escolherPalavra(int *palavrasJaEscolhdas) {
    int numeroDaPalavra;
    int i;

    do {
        numeroDaPalavra = (rand()&(NUMERODEPALAVRAS-1));

        for(i = 0; i < NUMERODEPALAVRAS; i++)
            if(numeroDaPalavra == palavrasJaEscolhdas[i])
                break;
    } while(i < NUMERODEPALAVRAS);

    return numeroDaPalavra;
}

int verificarLetra(char *palavra, char letra, char *letrasCertas) {
    int i, retorno;   

    retorno = 0;
    for(i = 0; i < strlen(palavra); i++) 
        if(palavra[i] == letra) {
            retorno++;
            letrasCertas[i] = letra;
        }

    return retorno;
}

void limparTela() {
    system("cls");
}
