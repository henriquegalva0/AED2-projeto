#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct jogador jogador;

jogador* criarJogador(char* nome);
jogador* carregarDeArquivo(char* nomeArquivo);


void ganharXP(jogador* j, int qtd);
void subirNivel(jogador* j, int qtd);
char* obternome(jogador* j);
int obterlevel(jogador* j);
int obterxp(jogador* j);
void destruirJogador(jogador* j);
int verificarSubidaDeNivel(jogador* j);
int salvarEmArquivo(jogador* j, char* nomeArquivo);