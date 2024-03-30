#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct No No;

typedef struct No{
    No *prox;
    int dado;
}No;

typedef struct Pilha{
    No *topo;
}Pilha;

No* criaNo(int valor){

    No *novoNo = malloc(sizeof(No));

    if(novoNo == NULL){
        printf("Nao foi possivel criar novo Noh\n");
        return NULL;
    }
    novoNo->dado = valor;
    novoNo->prox = NULL;
    return novoNo;
}

Pilha *pilha_cria(){

    Pilha *p = malloc(sizeof(Pilha));

    if(p == NULL){
        printf("Nao foi possivel criar a pilha\n");
        exit(1);
    }

    p->topo = NULL;
    return p;
}

int pilha_vazia(Pilha *p){
    return p->topo == NULL ? 1: 0;
}

void pilha_push(Pilha *p, int x){

    if(p == NULL){
        printf("A pilha nao foi iniciada, nao e possivel adicionar novo noh\n");
        return;
    }

    No *novoNo = criaNo(x);
    if(novoNo == NULL){
        printf("Nao foi possivel adicionar um novo Noh\n");
        return;
    }

    novoNo->prox = p->topo;
    p->topo = novoNo;
}

int pilha_pop(Pilha *p){

    if(pilha_vazia(p)){
        printf("Pilha vazia, nao eh possivel remover itens\n");
        exit(1);
    }

    No *noASerRemovido = p->topo;
    int valorDoNoASerRemovido = noASerRemovido->dado;
    p->topo = p->topo->prox;
    free(noASerRemovido);
    return valorDoNoASerRemovido;
}

void exibe_pilha(Pilha *p){

    if(pilha_vazia(p)){
        printf("Pilha vazia\n");
        return;
    }

    No* aux = p->topo;
    while(aux != NULL){
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

void pilha_libera(Pilha *p){
    
    if(p->topo != NULL){
        No *aux;
        while(p->topo != NULL){
            aux = p->topo;
            p->topo = p->topo->prox;
            free(aux);
            printf("Liberando elemento\n");
        }
    }
    
    free(p);
    printf("Pilha liberada\n");
}
