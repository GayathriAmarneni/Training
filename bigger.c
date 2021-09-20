//Program to print the bigger one among two numbers.

#include<stdio.h>
int main()
{
	int number1, number2;
	printf("Enter the first number: ");
	scanf("%d", &number1);
	printf("Enter the second number: ");
	scanf("%d", &number2);
	if(number1 == number2)
	{
		printf("%d is equal to %d", number1, number2);
	}
	else if(number1 > number2)
	{
		printf("%d is bigger than %d", number1, number2);
	}
	else
	{
		printf("%d is bigger than %d", number2, number1);
	}
	return 0;
}