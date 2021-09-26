//To print given name given number of times using command line arguments.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int counter;
	if(argc <= 1)
	{
		printf("Enter name and number of times to repeat? \n");
		exit (0);
	}
	printf("Name is: %s", argv[1]);
	printf("Count is: %d\n", atoi(argv[2]));
	for(counter = 0; counter < atoi(argv[2]); counter++)
	{
		printf("%s\n", argv[1]);
	}
}