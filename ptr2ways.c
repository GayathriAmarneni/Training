//Program to print the addresses of pointer before and after malloc.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptrName;
	int *ptrMarks;
	printf("Address of ptrName before malloc() is: %u\n", ptrName);
	printf("Address of ptrMarks before malloc() is: %u\n", ptrMarks);
	ptrName = malloc(20);
	ptrMarks = malloc(5 * sizeof(int));
	printf("Address of ptrName before malloc() is: %u\n", ptrName);
	printf("Address of ptrMarks before malloc() is: %u", ptrMarks);
}