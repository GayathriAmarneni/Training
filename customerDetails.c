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
	printf("Enter the details of bank customer:\n");
	printf("Name of customer = ");
	scanf("%s", customer.name)
	printf("Accounter number = ");
	scanf("%d", &customer.accountNumber, &customer.balance)
	printf("balance = ");
	scanf("%s %d %d", customer.name, &customer.accountNumber, &customer.balance);
	printf("Customer Details:\n");
	printf("Name of customer = %s\nAccount number = %d\nBalance = %d", customer.name, customer.accountNumber, customer.balance);
	return 0;
}