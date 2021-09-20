//Program to print n to the power n.

#include<stdio.h>
int main()
{
	int baseNumber, counter;
	long long result = 1;
	printf("Enter a basenumber to find power of its own: ");
	scanf("%d", &baseNumber);
	for(counter = 1; counter <= baseNumber; counter++)
	{
		result = result * baseNumber;
	}
	printf("%d to the power of %d = %d", baseNumber, baseNumber, result);
	return 0;
}