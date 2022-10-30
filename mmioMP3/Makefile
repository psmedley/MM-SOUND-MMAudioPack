.DELETE_ON_ERROR:
CC=gcc
CFLAGS=-Zomf -O2 -DUSE_OS2_TOOLKIT_HEADERS
#CFLAGS=-Wall -g -DDEBUG -DUSE_OS2_TOOLKIT_HEADERS
LIBS= -lm -lmmio -Llibmad-0.16.3 -lmad
INCLUDES= -Ilibmad-0.16.3/
LDFLAGS= -Zomf -Zmap
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CFLAGS)
all: mmioMP3.dll bitrate.exe

bitrate.exe: bitrate.c
	$(CC) $(CFLAGS) $^ -o $@ -Zstack 65536 -lm -lmmio
                                                                 
%.o: %.c
	$(COMPILE) -c $<
*.o: mmioMP3.h xing.h

mmioMP3.dll: mmioMP3.o xing.o
	$(CC) $(CFLAGS) $(LDFLAGS) $(INCLUDES) $^ -Zdll mmiomp3.def -o $@ $(LIBS)

mmioMP3.exe: main.o 
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)
	
clean:
	-rm core *.o mmioMP3.exe mmioMP3.dll bitrate.exe
