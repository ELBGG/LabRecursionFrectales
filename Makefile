CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine

testLine: turtlec.c examples/levy.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/levy.c -o levy $(LDLIBS)

clean:
	rm -f levy
