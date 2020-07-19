all: IpClass 
IpClass: IpClass.c
	g++ -O0 -m32 -o IpClass.binary IpClass.c

IpClass2: IpClass.c
	g++ -m32 -o IpClass2.binary IpClass.c


clean:
	rm IpClass.binary
