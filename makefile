all: add-nbo
	gcc -o add-nbo add-nbo.c

clean:
	rm -rf add-nbo
