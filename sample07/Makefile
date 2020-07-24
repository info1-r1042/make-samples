# Brief:  GNU Make - Sample 7
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS    = $(patsubst %.c, %.o, $(SOURCES))
EXEC    = app

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c Makefile
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
