# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = test_runner

.PHONY: all clean build test

all: build

# Build the test executable
build: addition.o test_main.o
	$(CC) $(CFLAGS) addition.o test_main.o -o $(TARGET)

# Compile the addition source file
addition.o: addition.c
	$(CC) $(CFLAGS) -c addition.c

# Compile the test source file
test_main.o: test_main.c
	$(CC) $(CFLAGS) -c test_main.c

# Run the tests
test: build
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)
