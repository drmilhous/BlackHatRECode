#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int a = 100;
int b;
int main(int argc, char ** argv, char ** envp)
{
	int x = -1;
	b = 0x42;
	int y = 0xFE;
	return a + b + argc;
}
