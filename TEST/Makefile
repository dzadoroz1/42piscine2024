CC = gcc
OBJ = main.o strstr.o

all: rush-02

rush-02: $(OBJ)
	$(CC) -o rush-02 $(OBJ)

main.o: main.c converter.h
	$(CC) -c main.c

strstr.o: strstr.c converter.h
	$(CC) -c strstr.c

clean:
	rm -f $(OBJ) rush-02