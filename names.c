//Read and print 5 names using array.

#include<stdio.h>
#define COUNT 5
#define LENGTH 20
int main()
{
	int counter;
	char names[COUNT][LENGTH];
	printf("Enter the %d names: \n\n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Enter name %d of %d: ", counter + 1, COUNT);
		scanf("%s", names[counter]);
	}
	printf("\n\n");
	for(counter =0; counter < COUNT; counter++)
	{
		printf("Name of student %d is %s.\n", counter + 1, names[counter]);
	}
	return 0;
}
