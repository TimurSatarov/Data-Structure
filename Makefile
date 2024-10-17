CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -L. 

SRC = src/LinkedList.c 

OBJ = $(SRC:.c=.o)

TEST_SRC = test/test_linkedlist.c build/main.c 

TEST_BINARY = test/test_linkedlist build/main

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
