SRC=src
BIN=bin
INC=inc
OBJ=obj
CC=gcc
CFLAGS=-c -g -Wall

all: $(BIN)/main1

$(BIN)/main1 : $(OBJ)/main1.o
	$(CC) -o $(BIN)/main1 $(OBJ)/main1.o

$(OBJ)/main1.o: $(SRC)/main1.c
	$(CC) $(CFLAGS) $(SRC)/main1.c -I $(INC)/
	mv main1.o $(OBJ)/

clean:
	rm -f a.out *.o
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done !"

