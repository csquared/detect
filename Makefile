CFLAGS=-Wall

clean:
	rm -f detect

install: all
	mv detect /usr/local/bin/

all: detect
