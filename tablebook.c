// Print tables book.

#include<stdio.h>
int main()
{
	int numberOfTables, rowLimit, column, row, result = 0;
	printf("Till what table do you want the table book: ");
	scanf("%d", &numberOfTables);
	printf("Enter the limit of rows in the table: ");
	scanf("%d", &rowLimit);
	for(column = 1; column <= numberOfTables; column++)
	{
		printf("Multiplication table of %d: \n", column);
		for(row = 1; row <= rowLimit; row++)
		{
			result = column * row;
			printf("%d X %d = %d\n", column, row, result);
		}
	}
	
}