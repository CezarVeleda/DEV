#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

Ponto *pto_cria(float x, float y);
void pto_libera(Ponto *p);
void pto_acessa(Ponto *p, float *x, float *y);
void pto_atribui(Ponto *p, float x, float y);
float pto_distancia(Ponto *p1, Ponto *p2);
Ponto *pto_copia(Ponto *p);
void pto_desloca(Ponto *p, float dx, float dy);
int pto_igual(Ponto *p1, Ponto *p2);// retorna 1 se sim, zero se não
#endif
