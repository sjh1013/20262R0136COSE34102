CC = gcc
CFLAGS = -Wall -g

all: hello fork_example thread_example

hello: hello.c
	$(CC) $(CFLAGS) -o $@ $<

fork_example: fork_example.c
	$(CC) $(CFLAGS) -o $@ $<

thread_example: thread_example.c
	$(CC) $(CFLAGS) -pthread -o $@ $<

clean:
	rm -f hello fork_example thread_example

.PHONY: all clean
