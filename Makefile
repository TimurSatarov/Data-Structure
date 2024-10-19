CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -L. 

SRC = src/LinkedList.c src/Stack.c

OBJ = $(SRC:.c=.o)

TEST_SRC = build/main.c #test/test_linkedlist.c test/test_stack.c build/main.c 

TEST_BINARY = build/main #test/test_linkedlist test/test_stack build/main

all: $(TEST_BINARY)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test/%: test/%.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

build/%: build/%.c $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJ) $(TEST_BINARY)

.PHONY: clean
