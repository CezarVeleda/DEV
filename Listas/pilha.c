#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct nodo{
    int info;
    struct nodo *proximo;
}Nodo;

struct pilha{
    Nodo *topo;
};


int pilha_vazia(Pilha* p) {
    return (p->topo == NULL);
}

Pilha *pilha_cria(){
    Pilha *p = malloc(sizeof(Pilha));
    if(p!= NULL){
        p->topo = NULL;        
    }
    return p;
}

void pilha_push(Pilha *p, int valor){
    Nodo *n = malloc(sizeof(Nodo));
    n->info = valor;
    n->proximo = p->topo;
    p->topo = n;
}
int pilha_pop(Pilha *p){
    if(p->topo == NULL){
        printf("Pilha vazia\n");
        return -1;
    }
    Nodo *t = p->topo;
    int v = t->info;
    p->topo = t->proximo; 
    free(t);
    return v;
}

int pilha_topo(Pilha *p){
    if (p->topo == NULL){
        printf("Pilha esta vazia\n");
        return -1;
    }
    else{
        return p->topo->info;
    }
}
void pilha_libera(Pilha *p){
        while(!pilha_vazia(p)){
            pilha_pop(p);
        }
        free(p);
}