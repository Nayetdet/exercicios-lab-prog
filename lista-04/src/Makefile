CC = gcc
CFLAGS = -I./include
SRCS = main.c src/pgm.c src/lbp.c
EXEC = main

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC)

clean:
	rm -f $(EXEC)

run: $(EXEC)
	./$(EXEC) pgm
