.DELETE_ON_ERROR:
CC=gcc
CFLAGS=-O2 -Zomf -DUSE_OS2_TOOLKIT_HEADERS
#CFLAGS=-Wall -g -DDEBUG -Zomf -DUSE_OS2_TOOLKIT_HEADERS
LIBS= -lm -lmmio -lssp -logg
INCLUDES= -Iflac-1.4.2/include
LDFLAGS= -Zomf -Zmap
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CFLAGS)

all: mmioFLAC.dll
                                                                 
%.o: %.c
	$(COMPILE) -c $<

*.o: mmioflac.h

mmioFLAC.dll: mmioFlac.o flac-1.4.2/src/libFLAC/.libs/flac.a
	$(CC) $(CFLAGS) -Zdll $(LDFLAGS) $(INCLUDES) $^ flac-1.4.2/src/libFLAC/.libs/flac.a mmioflac.def -o $@ $(LIBS)

mmioflac.exe: main.o mmioFlac.o libFLAC/src/libFLAC/.libs/flac.a
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ -Zstack 65536 $(LIBS)
	
clean:
	-rm *.o mmioflac.exe mmioflac.dll

