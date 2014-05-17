#include <stdio.h>

int g = 100;
static double d;

int main()
{
	int i = 1;
	int j = g+i+2;
	printf("sum is %d\n", j);
	printf("hello world!\n");
	// add a comment
	printf("this is an update\n");
	return 0;
}
