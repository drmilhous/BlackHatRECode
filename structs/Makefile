all: structs 
structs: structs.c
	gcc -O0 -m32 -o structs.binary structs.c

structs2: structs.c
	gcc -m32 -o structs2.binary structs.c


clean:
	rm structs.binary
