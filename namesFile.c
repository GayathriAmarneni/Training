//Read the file containing names and print names on the monitor.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fpNames;
	int counter, countOfNames;
	char fileName[100];
	printf("Enter file name to open: ");
	scanf("%s", fileName);
	printf("Enter the number of names to be saved in the file: ");
	scanf("%d", &countOfNames);
	char names[countOfNames][20];
	printf("\nEnter the %d names to be saved in the file: \n", countOfNames);
	fpNames = fopen(fileName, "w");
	for(counter = 0; counter < countOfNames; counter++)
	{
		printf("Enter name-%d: ", counter + 1);
		scanf("%s", names[counter]);
		fprintf(fpNames, "%s\n", names[counter]);
	}
	fclose(fpNames);
	fpNames = fopen(fileName, "r");
	if(fpNames == NULL)
	{
		printf("File does not exit.\n");
		return 0;
	}
	printf("\nThe names in the file %s are: \n", fileName);
	for(counter = 0; counter < countOfNames; counter++)
	{
		printf("%s\n", names[counter]);
	}
	fclose(fpNames);
	return 0;
}