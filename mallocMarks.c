//Read and print n marks using malloc.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count, counter, *ptrMarks;
	printf("Enter the count of subjects: ");
	scanf("%d", &count);
	ptrMarks = (int*)malloc(count *sizeof(int));
	for(counter = 0; counter < count; ++counter)
	{
		printf("Enter the marks of subject-%d: ", counter + 1);
		scanf("%d", &ptrMarks[counter]);
 	}
 	printf("\nMarks of subjects: \n");
	for(counter = 0; counter < count; ++counter)
	{
		printf("The marks of subject-%d: %d\n", counter + 1, ptrMarks[counter]);
	}
	return 0;
}