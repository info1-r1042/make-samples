# Brief:  Sample 8
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

AUTHOR="JavierBalloffet"
CLASS="R1042"
TP="TP1"
YEAR="2019"

CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-lm

SOURCES=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))
HEADERS=$(wildcard *.h)
EXEC=app

FILE_NAME=$(AUTHOR)-$(CLASS)-$(TP)-$(YEAR).tar.gz

.PHONY: all clean compress edit run

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

run: $(EXEC)
	./$(EXEC)
