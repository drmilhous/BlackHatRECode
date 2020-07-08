#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct a{
int x;
int y;
float z;
}a;
int main(int argc, char ** argv, char ** envp)
{
	struct a fred;
	fred.x = 100;
	scanf("%d", &fred.y);
	printf("X = %d and Y = %d", fred.x, fred.y); 
	return 0;
}
