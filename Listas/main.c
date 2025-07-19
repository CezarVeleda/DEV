#include <stdio.h>
#include "pilha.h"
int main(){
    Pilha *p = pilha_cria();
    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);
    printf("Pilha topo %d\n ", pilha_topo(p));
    while(!pilha_vazia(p)){
        printf("Pop: %d\n", pilha_pop(p));
    }
    pilha_libera(p);
    return 0;
}