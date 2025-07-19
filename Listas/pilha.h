#ifndef PILHA_H
#define PILHA_H
typedef struct pilha Pilha;
Pilha *pilha_cria();
void pilha_push(Pilha *p, int valor);
int pilha_pop(Pilha *p);
int pilha_topo(Pilha *p);
int pilha_vazia(Pilha *p);
void pilha_libera(Pilha *p);
#endif
