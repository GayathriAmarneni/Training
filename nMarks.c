//Read and print n marks without pointer.

#include<stdio.h>
int main()
{
	int arraySize, counter;
	printf("Enter the size of the array: ");
	scanf("%d", &arraySize);
	int marks[arraySize];
	for(counter = 0; counter < arraySize; ++counter)
	{
		printf("Enter the marks of subject-%d: ", counter + 1);
		scanf("%d",&marks[counter]);
 	}
 	printf("\nMarks of subjects: \n");
	for(counter = 0; counter < arraySize; ++counter)
	{
		printf("The marks of subject-%d: %d\n", counter + 1, marks[counter]);
	}
	return 0;
}
