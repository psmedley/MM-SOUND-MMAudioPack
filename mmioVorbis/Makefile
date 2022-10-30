CC=gcc
CFLAGS=-O2 -Zomf -DUSE_OS2_TOOLKIT_HEADERS
#CFLAGS=-Wall -g -DDEBUG -Zomf -DUSE_OS2_TOOLKIT_HEADERS
LIBS= -lm -lmmio
LDFLAGS= -Zomf -Zmap
INCLUDES= -Ilibvorbis-1.3.7/include -Ilibogg-1.3.5/include
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(CFLAGS)

all: mmioVorb.dll convert.exe bitrate.exe
                                                                 
bitrate.exe: bitrate.c
	$(CC) $(CFLAGS) $^ -o $@ -Zstack 65536 $(INCLUDES) -lm -lmmio

%.o: %.c
	$(COMPILE) -c $<

*.o: mmioVorbis.h

mmioVorb.dll: mmioVorbis.o 
	$(CC) $(CFLAGS) -Zdll -Zcrtdll $(LDFLAGS) $(INCLUDES) $^ libvorbis-1.3.7/lib/.libs/vorbis.a libvorbis-1.3.7/lib/.libs/vorbisenc.a libvorbis-1.3.7/lib/.libs/vorbisfile.a  libogg-1.3.5/src/.libs/ogg.a mmiovorbis.def -o $@ $(LIBS)

convert.exe: convert.c
	$(CC) $(CFLAGS) $^ -o $@ -Zstack 65536 $(INCLUDES) $(LIBS)

mmioVorbis.exe: main.obj
	$(CC) $(CFLAGS) $^ -o $@ -Zstack 65536 $(LIBS)
	
clean:
	-rm core *.o mmiovorbis.exe mmiovorb.dll convert.exe bitrate.exe

