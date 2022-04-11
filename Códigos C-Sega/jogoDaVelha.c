#include <stdio.h>
#include <stdlib.h>

#define EMPATE 1
#define DERROTAJOGADOR 2
#define VITORIAJOGADOR 3

int gradeDeJotadas[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
int dificuldade;

void exibirGrade();
void zerarGrade();
int perguntar(char *pergunta);
void selecionarDificuldade();
void lerJogada();
int analisador();
int procurarVazio(int posicoes[3]);
int computadorJogar(int vitoria, int contingencia, int estrategia);

int main() {
    int sair, estado;

    do {
        zerarGrade();
        limparTela();
        selecionarDificuldade();
        limparTela();

        for(;;) {
            exibirGrade();
            lerJogada();
            
            estado = analisador();
            limparTela();
            if(estado) {
                exibirGrade();
                break;
            }            
        }

        switch(estado) {
            case DERROTAJOGADOR:
                sair = perguntar("Voce perdeu!\nDeseja tentar de novo? (s/n)");
                break;

            case VITORIAJOGADOR:
                sair = perguntar("Voce ganhou!\nDeseja jogar de novo? (s/n)");
                break;
            
            case EMPATE:
                sair = perguntar("Empatou!\nDeseja jogar de novo? (s/n)");
                break;
        }
    } while(sair);
    
    return 0;
}

void limparTela() {
    system("cls");
}

void exibirGrade() {
    char jogadas[9];
    int i;

    for(i = 0; i < 9; i++)
        if(gradeDeJotadas[i] == 1) jogadas[i] = 'O';
        else if(gradeDeJotadas[i] == 4) jogadas[i] = 'X';
        else jogadas[i] = ' ';

    printf("    a   b   c\n");
    printf("  +-----------+\n");
    printf("1 | %c | %c | %c |\n", jogadas[0], jogadas[1], jogadas[2]);
    printf("  |---+---+---|\n");
    printf("2 | %c | %c | %c |\n", jogadas[3], jogadas[4], jogadas[5]);
    printf("  |---+---+---|\n");
    printf("3 | %c | %c | %c |\n", jogadas[6], jogadas[7], jogadas[8]);
    printf("  +-----------+\n");
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

void lerJogada() {
    char jogadaEmTexto[2];
    int x, y, jogada;
    int conversao[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    
    for(;;) {
        printf("Sua jogada> ");
        scanf("%s", jogadaEmTexto);

        x = jogadaEmTexto[0]-97; y = jogadaEmTexto[1]-49;
        jogada = conversao[y][x];

        if(!gradeDeJotadas[jogada]) {
            gradeDeJotadas[jogada] = 4;
            return;
        }
    }
}

void selecionarDificuldade() {
    int op;
    
    printf("Escolha a dificuldade:\n");
    printf("1 - Facil\n2 - Medio\n3 - Dificil\n4 - Muito dificil\n");
    printf(">> ");
    scanf("%d", &op);

    dificuldade = 4-op;
}

int analisador() {
    int total, vitoria = -1, contingencia = -1, estrategia = -1;
    int p1, p2, p3, i, j;
    int verificacao[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    int posicoes[3];

    for(i = 0; i < 8; i++) {
        for(j = 0; j < 3; j++)
            posicoes[j] = verificacao[i][j];

        total = 0;
        for(j = 0; j < 3; j++)
            total += gradeDeJotadas[posicoes[j]];

        switch(total) {
            case 2:
                vitoria = procurarVazio(posicoes);
                break;

            case 8:
                contingencia = procurarVazio(posicoes);
                break;

            case 1:
            case 0:
            case 4:
                estrategia = procurarVazio(posicoes);
                break;

            case 12:
                return VITORIAJOGADOR;
        }        
    }
    if(!gradeDeJotadas[4]) estrategia = 4;

    if((vitoria+contingencia+estrategia) == -3)
            return EMPATE;

    return computadorJogar(vitoria, contingencia, estrategia);
}

int procurarVazio(int posicoes[3]) {
    int i = 0;
    for(i = 0; i < 3; i++)
        if(!gradeDeJotadas[posicoes[i]]) return posicoes[i];
}

int computadorJogar(int vitoria, int contingencia, int estrategia) {
    if(vitoria != -1 && !numeroAleatorio()) {
        gradeDeJotadas[vitoria] = 1;
        return DERROTAJOGADOR;
    }
    if(contingencia != -1 && !numeroAleatorio()) {
        gradeDeJotadas[contingencia] = 1;
        if(contingencia == vitoria)
            return DERROTAJOGADOR;
        return 0;
    }
    gradeDeJotadas[estrategia] = 1;

    if(estrategia == vitoria)
        return DERROTAJOGADOR;

    return 0;
}

int numeroAleatorio() {
    return dificuldade ? rand()%dificuldade : 0;
}

void zerarGrade() {
    int i;

    for(i = 0; i < 9; i++)
        gradeDeJotadas[i] = 0;
}
