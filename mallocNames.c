//Read and print n names using malloc().

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int counter, count;
	char **names;
	printf("Enter the count of names: ");
	scanf("%d", &count);
	names = malloc(count * sizeof(char*));
	for(counter = 0; counter < count; ++counter)
	{
		names[counter] = malloc(20);
		printf("Enter the names of student-%d: ", counter + 1);
		scanf("%s", names[counter]);
 	}
 	printf("\nNames of students: \n");
	for(counter = 0; counter < count; ++counter)
	{
		printf("The name of student-%d is %s\n", counter + 1, names[counter]);
	}
	return 0;
}