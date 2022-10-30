.DELETE_ON_ERROR:
CC=gcc
CFLAGS=-O2 -Zcrtdll -Zomf -DUSE_OS2_TOOLKIT_HEADERS
#CFLAGS=-Wall -g -DDEBUG -Zcrtdll -Zomf -DUSE_OS2_TOOLKIT_HEADERS
LIBS= -lm -lmmio
INCLUDES= -Iinclude
LDFLAGS= -Zomf -Zmap
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CFLAGS)

all: mmioFLAC.dll
                                                                 
%.o: %.c
	$(COMPILE) -c $<

*.o: mmioflac.h

mmioFLAC.dll: mmioFlac.o libFLAC/src/libFLAC/.libs/flac.a
	$(CC) $(CFLAGS) -Zdll $(LDFLAGS) $(INCLUDES) $^ libFLAC/src/libFLAC/.libs/flac.a mmioflac.def -o $@ $(LIBS)

mmioflac.exe: main.o mmioflac.o libFLAC/libFLAC.lib
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ -Zstack 65536 $(LIBS)
	
clean:
	-rm core *.o mmioflac.exe mmioflac.dll

