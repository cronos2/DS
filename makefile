CC = g++
CPPFLAGS = -Wall -g -I$(INC) -c
SRC = ./src
INCLUDE = ./include
OBJ = ./obj
BIN = ./bin
DOC = ./doc
SOURCES := $(wildcard $(SRC)/*.cpp)
OBJECTS := $(SOURCES:$(SRC)/%.cpp=$(OBJ)/%.o)


all: $(BIN)/stack
	
$(BIN)/stack: $(OBJECTS)
	$(CC) -g -o $@ -I$(INCLUDE) -I$(SRC) $^

$(OBJECTS): $(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) -g -I$(INCLUDE) -I$(SRC) -o $@ -c $<

doc:
	doxygen $(DOC)/doxys/Doxyfile

clean:
	rm -f $(OBJ)/*

mrproper: clean
	rm -fR $(BIN)/* $(DOC)/doxygen

.PHONY: all clean mrproper doc
