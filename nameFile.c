//Read a name and save it into a file using file.

#include<stdio.h>
int main()
{
	FILE *fptrName;
	char name[20];
	fptrName = fopen("name.txt", "w");
	if(fptrName == NULL)
	{
		printf("File does not exit.\n");
		return;
	}
	printf("Enter the name: ");
	scanf("%s", name);
	fprintf(fptrName, "Name = %s", name);
	fclose(fptrName);
}