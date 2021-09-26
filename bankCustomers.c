//Read new customer details and print details of all bank customers.

#include<stdio.h>
#include<stdlib.h>
#define FILE_NAME "customer.dat"
void createCustomer();
void showCustomers();
struct details
{
	int accountNumber;
	char name[20];
	int accountBalance;
};
int main()
{
	int option;
	do
	{
		printf("BANK CUSTOMERS");
		printf("\n----------------");
		printf("\n1. Create new customer details");
		printf("\n2. Show all customer details");
		printf("\n3. Exit");
		printf("\n-----------------");
		printf("\nPlease Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1: createCustomer();
			break;
			case 2: showCustomers();
			break;
			case 3: ;
			break;
			default: printf("Enter a valid option.");
			break;
			getch();
		}
	}while(option != 3);
}
void createCustomer()
{
	printf("\nNew customer Details");
	struct details customer; 
	FILE *fpCustomer;
	printf("\nEnter the account number of customer: ");
	scanf("%d", &customer.accountNumber);
	printf("Enter the name of customer: ");
	scanf("%s", customer.name);
	printf("Enter the balance of customer: ");
	scanf("%d", &customer.accountBalance);
	fpCustomer = fopen(FILE_NAME, "a");
	if (fpCustomer == NULL)
	{
		printf("ERROR!");
		exit(0);
	}
	fwrite(&customer, sizeof(customer), 1, fpCustomer);
	fclose(fpCustomer);
	printf("\nCustomer details successfully saved.\n");
	printf("Account number of the customer: %d\n", customer.accountNumber);
	printf("Name of the customer: %s\n", customer.name);
	printf("Account balance: %d\n", customer.accountBalance);
	getch();
}
void showCustomers()
{
	struct details customer; 
	FILE *fpCustomer;
	fpCustomer = fopen(FILE_NAME, "r");
	if(fpCustomer == NULL)
	{
		printf("File doesn't exit.");
		exit(0);
	}
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		printf("Account number of the customer: %d\n", customer.accountNumber);
		printf("Name of the customer: %s\n", customer.name);
		printf("Account balance: %d\n", customer.accountBalance);
	}
	fclose(fpCustomer);
	getch();
}
