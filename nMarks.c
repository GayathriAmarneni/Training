//Read and print n marks without pointer.

#include<stdio.h>
int main()
{
	int count, counter;
	printf("Enter the count of subjects: ");
	scanf("%d", &count);
	int marks[count];
	for(counter = 0; counter < count; ++counter)
	{
		printf("Enter the marks of subject-%d: ", counter + 1);
		scanf("%d",&marks[counter]);
 	}
 	printf("\nMarks of subjects: \n");
	for(counter = 0; counter < count; ++counter)
	{
		printf("The marks of subject-%d: %d\n", counter + 1, marks[counter]);
	}
	return 0;
}
