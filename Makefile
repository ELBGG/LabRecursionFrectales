CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine

testLine: turtlec.c examples/arbolDistinto.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/arbolDistinto.c -o arbolDistinto $(LDLIBS)

clean:
	rm -f arbolDistinto.c
