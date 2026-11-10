SRC = $(wildcard src/*.c) 

CFLAGS = -Wall -Iinclude

all: build/sdd

build/sdd: src/main.c
	mkdir -p build
	gcc $(CFLAGS) $(SRC) -o build/sdd

run: build/sdd
	./build/sdd
