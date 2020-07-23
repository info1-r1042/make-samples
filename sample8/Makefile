# Brief:  GNU Make - Sample 8
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

AUTHOR   = "JavierBalloffet"
CLASS    = "R1042"
EXERCISE = "1_1"
YEAR     = "2020"

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS    = $(patsubst %.c, %.o, $(SOURCES))
EXEC    = app

FILE_NAME = $(AUTHOR)-$(CLASS)-$(EXERCISE)-$(YEAR).tar.gz

.PHONY: all clean compress edit

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c Makefile
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

compress: $(SOURCES) $(HEADERS) Makefile
	tar -zcvf $(FILE_NAME) $(SOURCES) $(HEADERS) Makefile

edit:
	code .
