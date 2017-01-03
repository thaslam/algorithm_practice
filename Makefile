#
# make requires tab character before commands, can use ; as an alternative
# if using vim tab may be using spaces, type :set noet to disable space insertion
#
CC=g++
CFLAGS=-g
SRCDIR=./src
INCDIR=./include
OUTDIR=./bin

basics: $(SRCDIR)/basics.cpp $(INCDIR)/sorting/selection_sort.h
	$(CC) $(CFLAGS) -o $(OUTDIR)/basics $(SRCDIR)/basics.cpp
