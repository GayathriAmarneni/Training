//Read and print n marks using malloc.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arraySize, counter, *ptrMarks;
	printf("Enter the size of the array: ");
	scanf("%d", &arraySize);
	ptrMarks = (int*)malloc(arraySize *sizeof(int));
	for(counter = 0; counter < arraySize; ++counter)
	{
		printf("Enter the marks of subject-%d: ", counter + 1);
		scanf("%d", &ptrMarks[counter]);
 	}
 	printf("\nMarks of subjects: \n");
	for(counter = 0; counter < arraySize; ++counter)
	{
		printf("The marks of subject-%d: %d\n", counter + 1, ptrMarks[counter]);
	}
	return 0;
}