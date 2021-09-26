//Print bank customer details from the file.

#include<stdio.h>
#include<stdlib.h>
struct details
{
	int accountNumber;
	int accountBalance;
	char name[20];
};
int main()
{
	struct details customer; 
	FILE *fpCustomer;
	fpCustomer = fopen("customerDetails.dat", "r");
	if(fpCustomer == NULL)
	{
		printf("File doesn't exit");
		exit(0);
	}
	fread(&customer, sizeof(customer), 1, fpCustomer);
	printf("Account number of the customer: %d\n", customer.accountNumber);
	printf("Name of the customer: %s\n", customer.name);
	printf("Account balance: %d\n", customer.accountBalance);
	fclose(fpCustomer);
	return 0;
}