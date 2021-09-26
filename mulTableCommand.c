//Printing Multiplication table using command line argument and also through normally.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int tableNumber, counter;
	if(argc <= 1)
	{
		printf("Enter a number to print multiplication Table: \n");
		scanf("%d", &tableNumber);
	}
	else
	{
		tableNumber = atoi(argv[1]);
	}
	printf("Multiplication Table of %d is: \n", tableNumber);
	for(counter = 1; counter <= 20; counter++)
	{
		printf("%d X %d = %d\n", tableNumber, counter, tableNumber * counter);
	}
	return 0;
}