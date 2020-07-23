# Brief:  GNU Make - Sample 5
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

OBJS = main.o functions.o

.PHONY: clean

app: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) app
