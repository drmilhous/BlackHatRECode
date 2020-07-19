all: var 
var: var.c
	gcc -O0 -m32 -o var.binary var.c

var2: var.c
	gcc -m32 -o var2.binary var.c


clean:
	rm var.binary
