//Create a file, read the data from file, modify the data and delete the data from file.

#include<stdio.h>
#include<stdlib.h>
#define FILE_NAME "fileOperations.dat"
void createCustomer();
void showCustomers();
void updateCustomer();
void deleteCustomer();
struct details
{
	int accountNumber;
	char name[20];
	int accountBalance;
	char status;
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
		printf("\n3. Update customer details");
		printf("\n4. Delete customer details");
		printf("\n5. Exit");
		printf("\n-----------------");
		printf("\nPlease Enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1: createCustomer();
			break;
			case 2: showCustomers();
			break;
			case 3: updateCustomer();
			break;
			case 4: deleteCustomer();
			break;
			case 5: ;
			break;
			default: printf("Enter a valid option.");
			break;
			getch();
		}
	}while(option != 5);
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
	customer.status = 'A';
	fpCustomer = fopen(FILE_NAME, "a");
	if (fpCustomer == NULL)
	{
		printf("ERROR!");
		return;
	}
	fwrite(&customer, sizeof(customer), 1, fpCustomer);
	fclose(fpCustomer);
	getch();
}

void showCustomers()
{
	struct details customer; 
	FILE *fpCustomer;
	fpCustomer = fopen(FILE_NAME, "r");
	if(fpCustomer == NULL)
	{
		printf("File does not exist");
		return;
	}
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(customer.status != 'D')
		{
			printf("Account number of the customer: %d\n", customer.accountNumber);
			printf("Name of the customer: %s\n", customer.name);
			printf("Account balance: %d\n", customer.accountBalance);
		}
	}
	fclose(fpCustomer);
	getch();
}

void updateCustomer()
{
	struct details customer;
	int account_Number;
	FILE *fpCustomer;
	printf("\nEnter the account number of the customer that you want to update: ");
	scanf("%d", &account_Number);
	fpCustomer = fopen(FILE_NAME, "r+");
	if(fpCustomer == NULL)
	{
		printf("File doesn't exit.");
		return;
	}
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(customer.accountNumber == account_Number)
		{
			printf("\nEnter a new data ---\n");
			printf("Enter the customer name to be updated: ");
			scanf("%s", customer.name);
			printf("Enter the account balance: ");
			scanf("%d", &customer.accountBalance);
			fseek(fpCustomer, -sizeof(customer), SEEK_CUR);
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			break;
		}
	}
	fclose(fpCustomer);
}

void deleteCustomer()
{
	struct details customer;
	FILE *fpCustomer;
	int account_Number;
	printf("\nEnter the account number of the customer that you want to delete: ");
	scanf("%d", &account_Number);
	fpCustomer = fopen(FILE_NAME, "r+");
	if(fpCustomer == NULL)
	{
		printf("File doesn't exit.");
		return;
	}
	while(fread(&customer, sizeof(customer), 1, fpCustomer))
	{
		if(customer.accountNumber == account_Number)
		{
			customer.status = 'D';
			fseek(fpCustomer, -sizeof(customer), SEEK_CUR);
			fwrite(&customer, sizeof(customer), 1, fpCustomer);
			printf("Successfully deleted the record\n");
			break;
		}
	}
	fclose(fpCustomer);
}