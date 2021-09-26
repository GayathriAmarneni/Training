//Read and print n marks for n students using dynamic array.

#include<stdio.h>
int main()
{
	int counter, count, subjectsCount, studentsCount;
	printf("Enter the count of students: ");
	scanf("%d", &studentsCount);
	char names[studentsCount][20];
	printf("Enter the count of subjects: ");
	scanf("%d", &subjectsCount);
	int marks[subjectsCount];
	for(counter = 0; counter < studentsCount; counter++)
	{
		printf("Enter the name of student-%d: ", counter + 1);
		scanf("%s", names[counter]);
		for(count = 0; count < subjectsCount; count++)
		{
			printf("Enter the marks of subject-%d: ", count + 1);
			scanf("%d", &marks[count]);
		}
	}
	for(counter = 0; counter < studentsCount; counter++)
	{
		printf("The marks of %s: \n", names[counter]);
		for(count = 0; count < subjectsCount; count++)
		{
			printf("Marks in subject-%d: ", count + 1);
			printf("%d\n", marks[count]);
		}
	}
	return 0;
}