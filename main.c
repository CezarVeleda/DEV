#include <stdio.h>
#include "ponto.h"

int main(){
    Ponto *p1 = pto_cria(2.0, 3.0);
    Ponto *p2 = pto_cria(4.0, 7.0);
    float d = pto_distancia(p1, p2);
    printf("Distancia entre os pontos %.2f\n", d);
    Ponto *p3 = pto_copia(p2);
    pto_desloca(p2, -2, -4);
    int igual = pto_igual(p1, p2);
    float x, y;
    pto_acessa(p3, &x, &y);

    printf("A copia tem os dados: X[%f], Y[%f]",x,y);
    printf("Os 2 pontos são iguais ? 1 = sim, 0 = nao, Resultado: [%d]",igual);
    pto_libera(p1);
    pto_libera(p2);
    pto_libera(p3);
    return 0;
}