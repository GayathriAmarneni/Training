//Print all command line arguments.

#include<stdio.h>
int main(int argc, char *argv[])
{
	int counter;
	for(counter = 0; counter < argc; counter++)
	{
		printf("argv[%d]: %s\n", counter, argv[counter]);
	}
	return 0;
}