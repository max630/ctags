# $Id: mk_djg.mak,v 1.1 2001/11/02 04:53:43 darren Exp $
#
# The most simplistic Makefile, for DJGPP on MS-DOS

include source.mak

CFLAGS	= -O2 -Wall -DMSDOS

ctags.exe: $(SOURCES)
	gcc $(CFLAGS) -s -o ctags.exe $(SOURCES) -lpc

clean:
	del ctags.exe
