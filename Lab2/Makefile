# Name: Benjamin Grifka
# Project: Lab2

# This is a Makefile for my lab assignment. It allows me to easily and accurately rebuild
# the lab assignment.


# EXECUTABLES is a Make Variable (similar to an environment variable) that lists all the
# "executables" associated with the lab. 
EXECUTABLESL=Launch
SRCL=Lab2L.c
OBJL=Lab2L.o

EXECUTABLEST=Tube
SRCT=Lab2T.c
OBJT=Lab2T.o

# The CC and CFLAGS variables are defined to ensure I'm using the native compiler and
# that the correct command-line options are set
CC=gcc
CFLAGS=-g

# Here is my default target for the Makefile.  When I type make, this first target will
# be created. I.e., all the executables
all: $(EXECUTABLESL) $(EXECUTABLEST)

launch: $(EXECUTABLESL)

tube: $(EXECUTABLEST)


# On the following lines (which _must_ start with a tab), are the commands I need to type -- 
# each time my source file is modified.
$(EXECUTABLESL): $(SRC)
	$(CC) $(CFLAGS) -c $(SRCL)
	$(CC) $(CFLAGS) -o $@ $(OBJL)
$(EXECUTABLEST): $(SRC)
	$(CC) $(CFLAGS) -c $(SRCT)
	$(CC) $(CFLAGS) -o $@ $(OBJT)

# By convention, I always have a target called
# "clean" that I used to define all temporary
# or intermediates.
clean:
	rm -f $(EXECUTABLESL) $(OBJL) *~
	rm -f $(EXECUTABLEST) $(OBJT) *~
