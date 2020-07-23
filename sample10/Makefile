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

SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJS    = $(patsubst %.c, %.o, $(SOURCES))
EXEC    = app

################################################################
# COMPILER AND ARGUMENTS                                       #
################################################################

CC      = gcc
CFLAGS  = -c -Wall
LDFLAGS = -lm

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

.PHONY: all clean compress edit doc help

all: $(EXEC)

$(EXEC): $(OBJS)
	@echo '[LD] Linking C executable $@'
	$(CC) $(OBJS) $(LDFLAGS) -o $@
	@echo 'Built target $@'

%.o: %.c Makefile
	@echo '[CC] Compiling C object $@'
	$(CC) $(CFLAGS) $< -o $@

clean:
	@echo '[RM] Cleaning workspace'
	rm -rf $(OBJS) $(EXEC) $(DOC_DIR)

compress: $(SOURCES) $(HEADERS) Makefile
	@echo '[TAR] Packing workspace'
	tar -zcvf $(FILE_NAME) $(SOURCES) $(HEADERS) Makefile $(DOC_FILE)

edit:
	@echo '[ED] Editing workspace'
	$(TEXT_EDITOR) .

doc:
	@echo '[DOC] Generating documentation'
	@mkdir -p $(DOC_DIR)
	$(DOC_GEN) $(DOC_FILE)

help:
	@echo ''
	@echo '********************************************************'
	@echo '  Uso:'
	@echo '    make all:       Compiles and links the application'
	@echo '    make clean:     Removes objects and executable'
	@echo '    make compress:  Generates .tar.gz file'
	@echo '    make edit:      Opens code files with text editor'
	@echo '    make doc:       Generates code documentation'
	@echo '    make help:      Shows help'
	@echo '********************************************************'
	@echo ''
