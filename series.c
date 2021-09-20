//Program to print the series 1, 4, 27, 256,... upto n terms.

#include<stdio.h>
#include<math.h>
int main()
{
	int countOfTerms, counter;
	long long power;
	printf("Enter the count of terms to be printed in the series 1, 4, 27,...: ");
	scanf("%d", &countOfTerms);
	for(counter = 1; counter < countOfTerms; counter++)
	{
		power = pow(counter, counter);
		printf("%d, ", power);
	}
	if(counter == countOfTerms)
	{
		power = pow(counter, counter);
		printf("%d. ", power);
	}
	return 0;
}
