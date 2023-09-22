all:
	gcc -c main.c
	gcc -o main main.o
	rm main.o
