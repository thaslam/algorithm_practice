#
# make requires tab character before commands, can use ; as an alternative
# if using vim tab may be using spaces, type :set noet to disable space insertion
#
CC=g++
CFLAGS=-g
SRCDIR=./src
INCDIR=-I./include
OUTDIR=./bin

basics: $(SRCDIR)/basics.cpp
	$(CC) $(CFLAGS) -o $(OUTDIR)/basics $(SRCDIR)/basics.cpp

sorting_selection: $(SRCDIR)/selection_sort.cpp
	$(CC) $(CFLAGS) -o $(OUTDIR)/sorting_selection $(SRCDIR)/selection_sort.cpp $(INCDIR)/sorting -I.
