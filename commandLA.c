//Print all command line arguments.

#include<stdio.h>
int main(int argc, char *argv[])
{
	int counter;
	printf("Welcome to command line arguments\n");
	printf("The number of arguments are: %d\n", argc);
	printf("The arguments are: ");
	for(counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return 0;
}