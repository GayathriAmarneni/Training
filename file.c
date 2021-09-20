//Read a name and save it into a file using file.

#include<stdio.h>
int main()
{
	FILE *fptr;
	char name[20];
	fptr = fopen("name.txt", "w");
	if(fptr == NULL)
	{
		printf("File does not exit.\n");
		return;
	}
	printf("Enter the name: ");
	scanf("%s", name);
	fprintf(fptr, "Name = %s", name);
	fclose(fptr);
}