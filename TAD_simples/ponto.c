#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto{
    float x;
    float y;
};

Ponto *pto_cria(float x, float y){
    Ponto *p = malloc(sizeof(Ponto));
    if (p!= NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(Ponto *p){
    free(p);
}

void pto_acessa(Ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void pto_atribui(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float pto_distancia(Ponto *p1, Ponto *p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

Ponto *pto_copia(Ponto *p){
    Ponto *p_copia = malloc(sizeof(Ponto));
    if(p_copia != NULL){
    p_copia->x = p->x;
    p_copia->y = p->y;
    }
    return p_copia;
}

void pto_desloca(Ponto *p, float dx, float dy){
    p->x += dx;
    p->y += dy;
}

int pto_igual(Ponto *p1, Ponto *p2){
    if(p1->x == p2->x && p1->y == p2->y){
        return 1;
    }
    else{
        return 0;
    }
}
