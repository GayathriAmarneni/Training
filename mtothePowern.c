//Program to calculate m to the power n.

#include<stdio.h>
int main()
{
	int base, power, counter;
	long long result = 1;
	printf("Enter a base number: ");
	scanf("%d", &base);
	printf("Enter a power number: ");
	scanf("%d", &power);
	for(counter=1; counter <= power; counter++)
	{
		result *= base;
	}
	printf("%d to the power of %d is %d", base, power, result);
	return 0;
}
