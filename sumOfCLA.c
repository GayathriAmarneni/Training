// Print sum of all command line arguments.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int sum = 0, counter, numbers[30];
	if(argc <= 1)
	{
		printf("Enter numbers: \n");
		exit(0);
	}
	for(counter = 0; counter < argc; counter++)
	{
		sum = sum + atoi(argv[counter]);
	}
	printf("Sum of all arguments is: %d\n", sum);
	return 0;
}