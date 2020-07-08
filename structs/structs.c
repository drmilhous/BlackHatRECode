#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct a{
int x;
int y;
char c;
float z;
}a;
int main(int argc, char ** argv, char ** envp)
{
	struct a fred;
	fred.x = 100;
	scanf("%d", &fred.y);
	printf("X = %d and Y = %d", fred.x, fred.y);
	fred.z = 1.1; 
	fred.c = 'a';
	return 0;
}
