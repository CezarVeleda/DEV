#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
int main(){
    
    Conta *c1 = cria_conta(123, 200.50);
    imprimir_conta(c1);
    depositar(c1, 500);
    imprimir_conta(c1);
    float em_conta = consulta(c1);
    printf("Saldo em conta R$%.2f", em_conta);
    sacar(c1, 700);
    imprimir_conta(c1);
    sacar(c1,2);
    imprimir_conta(c1);
    free(c1);
    return 0;
}