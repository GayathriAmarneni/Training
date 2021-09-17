//Read and print details of 1 bank customer using structure

#include<stdio.h>
struct details
{
	char name[20];
	int accountNumber;
	int balance;
};
int main()
{
	struct details customer;
	print("Enter the details of bank customer\n");
	scanf("%s %d %d", customer.name, &customer.accountNumber, &customer.balance);
	printf("%s %d %d", customer.name, customer.accountNumber, customer.balance);
	return 0;
}

