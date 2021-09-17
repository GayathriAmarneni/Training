//Read 5 names and their percentages and print it using arrays.

#include<stdio.h>
#define COUNT 5
#define LENGTH 10
int main()
{
	char names[COUNT][LENGTH];
	int counter, percentages[COUNT];
	printf("Enter the %d names of students: \n\n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Enter name %d: ", counter + 1);
		scanf("%s", names[counter]);
		printf("The percentage of %d student is: ", counter + 1);
		scanf("%d", &percentages[counter]);
	}
	for(counter =0; counter < COUNT; counter++)
	{
		printf("\n%s percentage is %d.", names[counter], percentages[counter]);
	}
	return 0;
}