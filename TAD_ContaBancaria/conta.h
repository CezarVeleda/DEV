#ifndef CONTA_H
#define CONTA_H
typedef struct conta Conta;

Conta *cria_conta(int numero, float saldo);
void depositar(Conta *c, float valor);
void sacar(Conta *c, float valor);
float consulta(Conta *c);
void imprimir_conta(Conta *c);
void liberar_conta(Conta *c);

#endif