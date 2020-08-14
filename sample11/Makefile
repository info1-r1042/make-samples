# Brief:  GNU Make - Samples
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

AUTHOR   = "JavierBalloffet"
CLASS    = "R1042"
EXERCISE = "1_1"
YEAR     = "2020"

SRC_DIR   = src
BUILD_DIR = build
BIN_DIR   = bin

SOURCES = $(shell find $(SRC_DIR) -name '*.c')
HEADERS = $(shell find $(SRC_DIR) -name '*.h')
OBJS    = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SOURCES))
EXEC    = app

CC           = gcc
CFLAGS       = -c -Wall
EXTRA_CFLAGS =
LDFLAGS      = -lm

ifdef DEBUG
  EXTRA_CFLAGS += -g -O0 -DDEBUG
endif

FILE_NAME = $(AUTHOR)-$(CLASS)-$(EXERCISE)-$(YEAR).tar.gz

TEXT_EDITOR = code

DOC_GEN  = doxygen
DOC_FILE = Doxyfile
DOC_DIR  = doc

.PHONY: all clean pkg edit doc

all: $(EXEC)

$(EXEC): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJS) $(LDFLAGS) -o $(BIN_DIR)/$@

$(BUILD_DIR)/%.o: %.c Makefile
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR) $(DOC_DIR)

pkg:
	tar -zcvf $(FILE_NAME) $(SRC_DIR) Makefile $(DOC_FILE)

edit:
	$(TEXT_EDITOR) .

doc:
	@mkdir -p $(DOC_DIR)
	$(DOC_GEN) $(DOC_FILE)
