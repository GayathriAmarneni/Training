//Read and print n bank customer deatils using array of structures.

#include<stdio.h>
int main()
{
	int counter, number;
	struct details
	{
		char name[20];
		int accountNumber;
		int balance;
	};
	printf("Enter the number of customers: ");
	scanf("%d", &number);
	struct details customer[number];
	printf("Enter the details of bank customers:\n\n");
	for(counter = 0; counter < number; counter++)
	{
		printf("Enter the name of customer-%d: ", counter + 1);
		scanf("%s", customer[counter].name);
		printf("Enter the accounter number of customer-%d: ", counter + 1);
		scanf("%d", &customer[counter].accountNumber);
		printf("Enter the balance of customer-%d: ", counter + 1);
		scanf("%d", &customer[counter].balance);
		printf("\n");
	}
	printf("\n\n");
	for(counter = 0; counter < number; counter++)
	{

		printf("Customer Details:\n");
		printf("\nCustomer-%d\nName: %s\nAccount number: %d\nBalance: %d", counter + 1, customer[counter].name, customer[counter].accountNumber, customer[counter].balance);
	}
	return 0;
}
