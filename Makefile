
CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/arreglo_dinamico.c src/stack.c
OUT = main

all: $(OUT)

$(OUT): main.c $(SRC)
	$(CC) $(CFLAGS) main.c $(SRC) -o $(OUT)

clean:
	@if [ -f $(OUT) ]; then rm -f $(OUT); fi

