CC=gcc
CFLAGS=
PROGS=tconvert countchar1 countchar2 revert revert2 countint intlist

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< -lm

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s

