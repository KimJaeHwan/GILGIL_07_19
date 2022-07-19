all: read_binary
	gcc -o read_binary read_binary.c

clean:
	rm -rf read_binary
