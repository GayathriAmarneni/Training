//Create a function and call it from main().

#include<stdio.h>
int mul(int number1, int number2)
{
	int result;
	result = number1 * number2;
	return(result);
}
int main()
{
	int product;
	product = mul(10, 20);
	printf("Product of 10 and 20 is: %d", product);
}