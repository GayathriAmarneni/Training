//Program to print sizes of datatypes.

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(char**));
	printf("%d\n", sizeof(float*));
	return 0;
}