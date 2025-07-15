#include <stdio.h>
#include <stdlib.h>
#include "conta.h"
struct conta{
    int numero_da_conta;
    float saldo_em_conta;
};

Conta *cria_conta(int numero, float saldo_inicial){
    Conta *c = malloc(sizeof(Conta));
    if(c != NULL){
        c->numero_da_conta = numero;
        c->saldo_em_conta = saldo_inicial;
    }
    return c;
}

void depositar(Conta *c, float valor){
    if(c != NULL){
        c->saldo_em_conta += valor;
    }
}

void sacar(Conta *c, float valor){
    if(c != NULL){
        if(c->saldo_em_conta >= valor){
        c->saldo_em_conta -= valor;
        }
        else{
            printf("Valor disponivel não suficiente");
        }
    }
}
float consulta(Conta *c){
    if(c != NULL){
        return c->saldo_em_conta;
    }
    else return -1;
}
void imprimir_conta(Conta *c){
    if(c != NULL){
        printf("\nNumero da conta: [%d]\n", c->numero_da_conta);
        printf("Valor em conta: R$%.2f\n", c->saldo_em_conta);
    }
    else{
        printf("\nConta não localizada.");
    }
}
void liberar_conta(Conta *c){
    free(c);
}

