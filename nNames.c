//Read and print n names using pointer.

#include<stdio.h>
int main()
{
	int counter, maxSize;
	printf("Enter the size of array: ");
	scanf("%d",&maxSize);
	char namesArray[maxSize][20];
	char (*ptrNames)[20] = namesArray;
	for(counter = 0; counter < maxSize; ++counter)
	{
		printf("Enter the names of student-%d: ", counter + 1);
		scanf("%s", ptrNames[counter]);
 	}
 	printf("\nNames of students: \n");
	for(counter = 0; counter < maxSize; ++counter)
	{
		printf("The name of student-%d is %s\n", counter + 1, ptrNames[counter]);
	}
	return 0;
}