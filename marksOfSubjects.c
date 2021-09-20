//Read and print n marks for n students using pointers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int subjectsCount, studentsCount, counter, **marks;
	char **names;
	printf("Enter the count of marks: ");
	scanf("%d", &subjectsCount);
	printf("Enter the count of students: ");
	scanf("%d", &studentsCount);
	marks = malloc(subjectsCount * sizeof(int*));
	names = malloc(studentsCount * sizeof(char*));
	for(counter = 0; counter < studentsCount; counter++)
	{
		names[counter] = malloc(20);
		printf("\nEnter the name of student-%d: ", counter + 1);
		scanf("%s", names[counter]);
		marks[counter] = malloc(subjectsCount * sizeof(int*));
		for(counter = 0; counter < subjectsCount; counter++)
		{
			printf("Enter the marks of subject-%d: ", counter + 1);
			scanf("%d", &marks[counter]);
		}
	}
	for(counter = 0; counter < studentsCount; counter++)
	{
		printf("The marks of %s: \n", names[counter]);
		for(counter = 0; counter < subjectsCount; counter++)
		{
			printf("Marks in subject-%d: ", counter + 1);
			printf("%d\n", marks[counter]);
		}
	}
	return 0;
}