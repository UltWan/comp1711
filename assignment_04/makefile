#
# Makefile for modular programming coursework
#

myhexdump: print.o hexdump.o
	gcc -g -std=c99 -o myhexdump print.o hexdump.o

print.o: print.c print.h
	gcc -g -c -std=c99 -o print.o print.c

clean:
	rm myhexdump *.o



