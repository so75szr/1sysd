.PHONY: all clean

PROGS=ok_boomer limites boomer_bsd

CC=gcc
CFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< 

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s

