#
# make requires tab character before commands, can use ; as an alternative
# if using vim tab may be using spaces, type :set noet to disable space insertion
#
CC=g++
SRCDIR=./src
INCDIR=./include
OUTDIR=./bin

basics: $(SRCDIR)/basics.cpp $(INCDIR)/sorting/selection_sort.h
	$(CC) -o $(OUTDIR)/basics $(SRCDIR)/basics.cpp
