#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 8

void inicializarTabuleiro(char tab[TAM][TAM]) {
    char inicial[TAM][TAM] = {
        {'t','c','b','d','r','b','c','t'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'T','C','B','D','R','B','C','T'}
    };

    for(int i=0;i<TAM;i++)
        for(int j=0;j<TAM;j++)
            tab[i][j] = inicial[i][j];
}

void mostrarTabuleiro(char tab[TAM][TAM]) {
    printf("\n   a b c d e f g h\n");
    for(int i=0;i<TAM;i++) {
        printf("%d  ", 8 - i);
        for(int j=0;j<TAM;j++) {
            printf("%c ", tab[i][j]);
        }
        printf(" %d\n", 8 - i);
    }
    printf("   a b c d e f g h\n");
}

int coordenadaValida(int l, int c) {
    return l >= 0 && l < 8 && c >= 0 && c < 8;
}

int mesmaCor(char p1, char p2) {
    if (p2 == ' ') return 0;
    return (isupper(p1) && isupper(p2)) || (islower(p1) && islower(p2));
}

int movimentoBasicoValido(char tab[TAM][TAM], int li, int ci, int lf, int cf, int vez) {
    char p = tab[li][ci];

    if (p == ' ') return 0;
    if (vez == 0 && !isupper(p)) return 0;
    if (vez == 1 && !islower(p)) return 0;
    if (mesmaCor(p, tab[lf][cf])) return 0;

    return 1; // validação simples
}

int main() {
    char tab[TAM][TAM];
    int vez = 0; // 0 = brancas, 1 = pretas
    char origem[3], destino[3];

    inicializarTabuleiro(tab);

    while (1) {
        mostrarTabuleiro(tab);

        printf("\nJogador %s\n", vez == 0 ? "Brancas (MAIÚSCULAS)" : "Pretas (minúsculas)");
        printf("Digite a jogada (ex: e2 e4) ou 'sair': ");

        scanf("%s", origem);
        if (origem[0] == 's') break;
        scanf("%s", destino);

        int ci = origem[0] - 'a';
        int li = 8 - (origem[1] - '0');
        int cf = destino[0] - 'a';
        int lf = 8 - (destino[1] - '0');

        if (!coordenadaValida(li,ci) || !coordenadaValida(lf,cf)) {
            printf("Movimento inválido!\n");
            continue;
        }

        if (!movimentoBasicoValido(tab, li, ci, lf, cf, vez)) {
            printf("Jogada inválida!\n");
            continue;
        }

        tab[lf][cf] = tab[li][ci];
        tab[li][ci] = ' ';
        vez = !vez;
    }

    printf("Jogo encerrado.\n");
    return 0;
}
