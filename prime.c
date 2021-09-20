//Program to print a given number is prime or not.

#include<stdio.h>
int main()
{
	int number, counter, count=0;
	printf("Enter a number to check whether it is a prime or not: ");
	scanf("%d", &number);
	for(counter = 2; counter <= number / 2; ++counter)
	{
		if(number % counter == 0)
		{
			count = 1;
			break; 
		}
	}
	if(number <= 1)
	{
		printf("%d is not a prime number", number);
	}
	else
	{
		if(count == 0)
			printf("%d is a prime number", number);
		else
			printf("%d is not a prime number", number);
	}
	return 0;	
}