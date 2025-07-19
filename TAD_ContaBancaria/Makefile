# compilador 
CC = gcc
#flags de compilacao 
CFLAGS = -Wall -g

# Arquivos-fonte e objetos
SRC = main.c conta.c
OBJ = main.o conta.o

# Nome do executável
EXEC = conta

# Regra padrão: compilar tudo
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

main.o: main.c conta.h
	$(CC) $(CFLAGS) -c main.c

conta.o: conta.c conta.h
	$(CC) $(CFLAGS) -c conta.c

# Limpa os arquivos compilados
clean:
	rm -f *.o $(EXEC)