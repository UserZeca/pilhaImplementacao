#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *p = pilha_cria();

    pilha_push(p, 2);
    pilha_push(p, 5);
    pilha_push(p, 8);
    pilha_push(p, 10);
    printf("Primeira Pilha\n");
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

    printf("\n+ Outra pilha\n");
    p = pilha_cria();
    pilha_push(p, 9);
    pilha_push(p, 1);
    pilha_push(p, 10);
    pilha_push(p, 12);
    exibe_pilha(p);
    printf("Removendo todos os elementos\n");
    pilha_libera(p);

    return 0;
}
