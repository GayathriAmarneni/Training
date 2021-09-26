//Create a function and call it from main().

#include<stdio.h>
int mul(int number1, int number2)
{
	int result;
	result = number1 * number2;
	return result;
}
int main()
{
	int a, b, product;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	product = mul(a, b);
	printf("Product of %d and %d is: %d", a, b, product);
}