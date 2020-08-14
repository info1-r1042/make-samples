# Brief:  GNU Make - Samples
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

OBJS = main.o functions.o

.PHONY: clean

app: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o app

main.o: main.c
	$(CC) $(CFLAGS) main.c -o main.o

functions.o: functions.c
	$(CC) $(CFLAGS) functions.c -o functions.o

clean:
	rm -f $(OBJS) app
