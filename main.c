#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *p = pilha_cria();

    pilha_push(p, 2);
    pilha_push(p, 5);
    pilha_push(p, 8);
    pilha_push(p, 10);
    exibe_pilha(p);

    printf("Removendo: %d\n", pilha_pop(p));
    exibe_pilha(p);
    printf("Removendo: %d\n", pilha_pop(p));
    exibe_pilha(p);
    printf("Removendo: %d\n", pilha_pop(p));
    exibe_pilha(p);
    printf("Removendo: %d\n", pilha_pop(p));
    exibe_pilha(p);
   
    pilha_libera(p);
    
    return 0;
}
