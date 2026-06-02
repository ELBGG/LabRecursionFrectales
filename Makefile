CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine

testLine: turtlec.c examples/arbolProfundidad.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/arbolProfundidad.c -o arbolProfundidad $(LDLIBS)

clean:
	rm -f arbolProfundidad.c
