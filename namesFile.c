//Read the file containing names and print names on the monitor.

#include<stdio.h>
int main()
{
	FILE *fptr;
	int counter, arraySize;
	printf("Enter the number of names in the file: ");
	scanf("%d", &arraySize);
	char names[arraySize][20];
	fptr = fopen("names.txt", "W");
	if(fptr = NULL)
	{
		printf("File does not exit.\n");
		return 0;
	}
	printf("Enter The names:\n");
	for(counter = 0; counter < arraySize; counter++)
	{
		printf("Enter the name-%d: ", counter + 1);
		scanf("%s", names[counter]);
		fprintf(fptr, "\nName-%d = %s\n", counter + 1, names[counter]);
	}
	fclose(fptr);
}