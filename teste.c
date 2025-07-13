#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *esq;
    struct no *dir;
} No;

No* novo_no(int valor) {
    No* n = malloc(sizeof(No));
    n->valor = valor;
    n->esq = NULL;
    n->dir = NULL;
    return n;
}

No* inserir(No* raiz, int valor) {
    if (raiz == NULL) return novo_no(valor);
    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else
        raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}

int imprimirCaminho(No* raiz, int valorAlvo) {
    if (raiz == NULL) return 0;

    printf("%d", raiz->valor);

    if (raiz->valor == valorAlvo) {
        printf("\n");
        return 1;
    }

    printf(" -> ");

    if (valorAlvo < raiz->valor)
        return imprimirCaminho(raiz->esq, valorAlvo);
    else
        return imprimirCaminho(raiz->dir, valorAlvo);
}

int buscar_e_imprimir(No* raiz, int valorAlvo) {
    No* p = raiz;
    while (p != NULL) {
        if (p->valor == valorAlvo) {
            imprimirCaminho(raiz, valorAlvo);
            return 1;
        }
        p = (valorAlvo < p->valor) ? p->esq : p->dir;
    }
    return 0;
}

void libera(No* raiz) {
    if (raiz == NULL) return;
    libera(raiz->esq);
    libera(raiz->dir);
    free(raiz);
}

int main() {
    No* raiz = NULL;
    int valores[] = {10, 5, 20, 3, 8, 35};
    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++) {
        raiz = inserir(raiz, valores[i]);
    }

    printf("Caminho até 8: ");
    buscar_e_imprimir(raiz, 8);

    printf("Caminho até 35: ");
    buscar_e_imprimir(raiz, 35);

    printf("Caminho até 99: ");
    if (!buscar_e_imprimir(raiz, 99))
        printf("Valor não encontrado.\n");

    libera(raiz);
    return 0;
}
