//Save bank customer details in file.

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
	printf("Enter the account number of customer: ");
	scanf("%d", &customer.accountNumber);
	printf("Enter the name of customer: ");
	scanf("%s", customer.name);
	printf("Enter the balance of customer: ");
	scanf("%d", &customer.accountBalance);
	fpCustomer = fopen("customerDetails.dat", "w");
	if (fpCustomer == NULL)
	{
		printf("ERROR!");
		exit(0);
	}
	fwrite(&customer, sizeof(customer), 1, fpCustomer);
	fclose(fpCustomer);
	return 0;
}