################################################################
# AUTHOR INFORMATION                                           #
################################################################

AUTHOR   = "JavierBalloffet"
CLASS    = "R1042"
EXERCISE = "1_1"
YEAR     = "2020"

################################################################
# SOURCES, HEADERS, OBJECTS, LIBRARIES AND EXECUTABLES         #
################################################################

SRC_DIR   = src
BUILD_DIR = build
BIN_DIR   = bin

SOURCES = $(shell find $(SRC_DIR) -name '*.c')
HEADERS = $(shell find $(SRC_DIR) -name '*.h')
OBJS    = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SOURCES))
EXEC    = app

################################################################
# COMPILER AND ARGUMENTS                                       #
################################################################

CC           = gcc
CFLAGS       = -c -Wall
EXTRA_CFLAGS =
LDFLAGS      = -lm

ifdef DEBUG
  EXTRA_CFLAGS += -g -O0 -DDEBUG
endif

################################################################
# TAR FILE INFORMATION                                         #
################################################################

FILE_NAME = $(AUTHOR)-$(CLASS)-$(EXERCISE)-$(YEAR).tar.gz

################################################################
# TEXT EDITOR                                                  #
################################################################

TEXT_EDITOR = code

################################################################
# DOCUMENTATION                                                #
################################################################

DOC_GEN  = doxygen
DOC_FILE = Doxyfile
DOC_DIR  = doc

################################################################
# MAKE TARGETS                                                 #
################################################################

.PHONY: all clean pkg edit doc help

## all:   Compiles and links the application
all: $(EXEC)

$(EXEC): $(OBJS)
	@echo '[LD] Linking C executable $@'
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJS) $(LDFLAGS) -o $(BIN_DIR)/$@
	@echo 'Built target $@'

$(BUILD_DIR)/%.o: %.c Makefile
	@echo '[CC] Compiling C object $@'
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) $< -o $@

## clean: Removes objects and executable
clean:
	@echo '[RM] Cleaning workspace'
	rm -rf $(BUILD_DIR) $(BIN_DIR) $(DOC_DIR)

## pkg:   Generates .tar.gz file
pkg:
	@echo '[TAR] Packing workspace'
	tar -zcvf $(FILE_NAME) $(SRC_DIR) Makefile $(DOC_FILE)

## edit:  Opens code files with text editor
edit:
	@echo '[ED] Editing workspace'
	$(TEXT_EDITOR) .

## doc:   Generates code documentation
doc:
	@echo '[DOC] Generating documentation'
	@mkdir -p $(DOC_DIR)
	$(DOC_GEN) $(DOC_FILE)

## help:  Shows help
help:
	@sed -n 's/^## //p' Makefile
