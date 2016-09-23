CC = gcc
CFLAGS = -Wall -I/usr/include/ -I.
LDFLAGS = -lncurses
DEPS = var.h
OBJ = main.o init.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

run: $(OBJ)
	gcc  -o $@ $^  $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(OBJ) run
