CC = gcc


all:
	$(CC) sources/trunca.c -o build/trunca

install:
	
	cp build/trunca /usr/local/bin
	rm build/trunca
