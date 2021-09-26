//Observing character array before and after scanf function.

#include<stdio.h>
void main()
{
	char name[20];
	int counter;
	printf("Char array values before scanf():\n");
	for(counter = 0; counter < sizeof(name); counter++)
	{
		printf("%c \t %d\n", name[counter], name[counter]);
	}
	printf("\nEnter the name: ");
	scanf("%s", &name);
	for(counter = 0; counter < sizeof(name); counter++)
	{
		printf("%c \t %d\n", name[counter], name[counter]);
	}
}