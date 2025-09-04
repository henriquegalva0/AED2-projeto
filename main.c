#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"

int main(){

    jogador* j=criarJogador("Roberto");

    printf("%s\n",obternome(j));
    printf("%d\n",obterlevel(j));
    printf("%d\n\n",obterxp(j));

    ganharXP(j, 100);
    subirNivel(j, 10);

    printf("%s\n",obternome(j));
    printf("%d\n",obterlevel(j));
    printf("%d",obterxp(j));

    return 0;
}