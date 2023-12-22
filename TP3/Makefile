.PHONY: all clean

PROGS=game
CC=gcc
CFLAGS=

all: $(PROGS)

%: %.py
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s

