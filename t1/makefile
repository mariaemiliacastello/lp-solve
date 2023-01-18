CC = gcc
INPUT = ./exemplos/entrada

all: transporte

transporte: transporte.c
	$(CC) -o transporte transporte.c 

run: all
	./transporte < $(INPUT)

clean:
	@rm -rf transporte
