# Brief:  GNU Make - Samples
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

CC = gcc

.PHONY: clean

app: main.o functions.o
	$(CC) main.o functions.o -o app -lm

main.o: main.c
	$(CC) -c main.c -o main.o -Wall

functions.o: functions.c
	$(CC) -c functions.c -o functions.o -Wall

clean:
	rm -f *.o app
