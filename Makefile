CC=gcc
CFLAGS=-Iinclude

DEPS = binary_search.h
OBJ = src/main.o src/binary_search.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bin/binarysearch: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f src/*.o bin/binarysearch
