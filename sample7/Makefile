# Brief:  GNU Make - Sample 7
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS    = $(patsubst %.c, %.o, $(SOURCES))
EXEC    = app

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c Makefile
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
