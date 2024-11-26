CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o estudiante.o
	$(CC) $(CFLAGS) -o gestion_estudiantes main.o estudiante.o

main.o: main.c estudiante.h
	$(CC) $(CFLAGS) -c main.c

estudiante.o: estudiante.c estudiante.h
	$(CC) $(CFLAGS) -c estudiante.c

clean:
	rm -f *.o gestion_estudiantes