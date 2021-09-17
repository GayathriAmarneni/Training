// Multiplication table of a given number. 

#include <stdio.h>
int main()
{
	int tableNumber, counter;
	printf("Enter a tableNumber: ");
	scanf("%d", &tableNumber);
	for (counter = 1; counter <= 10; ++counter)
	{
		printf("%d X %d = %d \n", tableNumber, counter, tableNumber * counter);
	}
	return 0;
}
	