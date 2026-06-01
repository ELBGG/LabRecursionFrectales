CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine

testLine: turtlec.c examples/arbol3ramas.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/arbol3ramas.c -o arbol3ramas $(LDLIBS)

clean:
	rm -f arbol3ramas.c
