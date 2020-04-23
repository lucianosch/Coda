## Makefile gestione progetti C++ in Geany
# da adattare al progetto.
# Sistema operativo Linux Ubuntu 18.04 - Cinnamon (Linux Mint)
# con compilatore g++ 7.3.0
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
# macro per elencare i sorgenti contenuti nel progetto
SOURCES=mainCoda.cpp Coda.cpp
#
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	rm -f $(OBJECTS)
	
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean: $(OBJECTS)
	rm $(OBJECTS)
