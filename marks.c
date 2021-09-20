//Read and Print 5 marks using array.

#include<stdio.h>
#define COUNT 5
int main()
{
	int marks[COUNT], counter;
	printf("Enter the marks of %d subjects: \n\n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Enter marks of subject %d: ", counter + 1);
		scanf("%d",&marks[counter]);
	}
	printf("\nMarks of %d subjects are: \n\n", COUNT);
	for(counter = 0; counter < COUNT; counter++)
	{
		printf("Subject-%d marks is = %d \n", counter + 1, marks[counter]);
	}
	return 0;
}
