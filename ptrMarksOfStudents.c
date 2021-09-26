//Read and print n marks for n students using pointers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int subjectsCount, studentsCount, counter, count, **marks;
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
		marks[counter] = malloc(subjectsCount * sizeof(int));
		for(count = 0; count < subjectsCount; count++)
		{
			printf("Enter the marks of subject-%d: ", count + 1);
			scanf("%d", &marks[counter][count]);
		}
	}
	for(counter = 0; counter < studentsCount; counter++)
	{
		printf("The marks of %s: \n", names[counter]);
		for(count = 0; count < subjectsCount; count++)
		{
			printf("Marks in subject-%d: ", count + 1);
			printf("%d\n", marks[counter][count]);
		}
	}
	return 0;
}