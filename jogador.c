#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <jogador.h>

struct jogador {
    char nome[20];
    int level;
    int xp;
};

jogador* criarJogador(char* nome) {
    jogador* j = malloc(sizeof(jogador));
    if (!j) return NULL;
    strncpy(j->nome, nome, sizeof(j->nome) - 1);
    j->nome[sizeof(j->nome)-1] = '\0';
    j->level = 1;
    j->xp = 0;
    return j;
}

jogador* carregarDeArquivo(char* nomeArquivo);


void ganharXP(jogador* j, int qtd) {
    j->xp += qtd;
    return 0;
}

void subirNivel(jogador* j,int qtd) {
    j->level+=qtd;
    return 0;
}

char* obternome(jogador* j) {
    return j->nome;
}

int obterlevel(jogador* j) {
    return j->level;
}

int obterxp(jogador* j) {
    return j->xp;
}

void destruirJogador(jogador* j){
    if (j!=NULL){
        free(j);
    }
    return 0;
}

int verificarSubidaDeNivel(jogador* j){
    if (j->xp >= 100){
        subirNivel(j, j->xp%100);
        j->xp-=(j->xp%100)*100;
    }
    return 0;
}

int salvarEmArquivo(jogador* j, char* nomeArquivo){
    FILE* f = fopen(nomeArquivo, "w");
    if (!f) return 0;

    fprintf(f, "%s\n%d\n%d\n", j->nome, j->level, j->xp);
    fclose(f);
    return 1;
}
