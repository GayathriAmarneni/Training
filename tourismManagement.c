//Tourism management system in c - File handling.

#include<stdio.h>
#include<stdlib.h>
#define FILE_NAME "tourism.dat"
#define MAX_LENGTH 20
void createPassenger();
void showPassengers();
void updatePassenger();
void deletePassenger();
struct details
{
	int travelId;
	char name[MAX_LENGTH];
	int age;
	char package[MAX_LENGTH];
	char status;
};
int main()
{
	int option;
	do
	{
		printf("\n..... Tourism Management System.....");
		printf("\n---------------");
		printf("\n1.Add new passenger details");
		printf("\n2.Show all passenger details");
		printf("\n3.Update passenger details");
		printf("\n4.Delete passenger details");
		printf("\n5.Exit");
		printf("\n----------------");
		printf("\nPlease enter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1: createPassenger();
			break;
			case 2: showPassengers();
			break;
			case 3: updatePassenger();
			break;
			case 4: deletePassenger();
			break;
			case 5: ;
			break;
			default: printf("\nEnter valid option");
			break;
		}
	}while(option != 5);
}

void createPassenger()
{
	printf("\nEnter new passenger details ...");
	struct details passenger;
	FILE *fpPassenger;
	printf("\nEnter the travel id of passenger: ");
	scanf("%d", &passenger.travelId);
	printf("Enter the name of the passenger: ");
	scanf("%s", passenger.name);
	printf("Enter the age of passenger: ");
	scanf("%d", &passenger.age);
	printf("Enter the package of passenger: ");
	scanf("%s", passenger.package);
	passenger.status = 'A';
	fpPassenger = fopen(FILE_NAME, "a");
	if(FILE_NAME == NULL)
	{
		printf("\nError!");
		return;
	}
	fwrite(&passenger, sizeof(passenger), 1, fpPassenger);
	fclose(fpPassenger);
	getch();
}

void showPassengers()
{
	struct details passenger;
	FILE *fpPassenger;
	fpPassenger = fopen(FILE_NAME, "r");
	if(FILE_NAME == NULL)
	{
		printf("\nError!");
		return;
	}
	while(fread(&passenger, sizeof(passenger), 1, fpPassenger))
	{
		if(passenger.status != 'D')
		{
			printf("\nTravel id of passenger: %d", passenger.travelId);
			printf("\nName of passenger: %s", passenger.name);
			printf("\nAge of the passenger: %d", passenger.age);
			printf("\nPackage of passenger: %s", passenger.package);
		}
	}
	fclose(fpPassenger);
	getch();
}

void updatePassenger()
{
	int passengerId;
	struct details passenger;
	printf("\nEnter the travel id of passenger that you want to update: ");
	scanf("%d", &passengerId);
	FILE *fpPassenger;
	fpPassenger = fopen(FILE_NAME, "r+");
	if(FILE_NAME == NULL)
	{
		printf("\nError!");
		return;
	}
	while(fread(&passenger, sizeof(passenger), 1, fpPassenger))
	{
		if(passenger.travelId == passengerId)
		{
			printf("\nEnter new details ...");
			printf("\nEnter the name of the passenger: ");
			scanf("%s", passenger.name);
			printf("Enter the age of passenger: ");
			scanf("%d", &passenger.age);
			printf("Enter the package of passenger: ");
			scanf("%s", passenger.package);
			fseek(fpPassenger, -sizeof(passenger), SEEK_CUR);
			fwrite(&passenger, sizeof(passenger), 1, fpPassenger);
			break;
		}
	}
	fclose(fpPassenger);
}

void deletePassenger()
{
	int passengerId;
	struct details passenger;
	printf("\nEnter the travel id of passenger that you want to delete: ");
	scanf("%d", &passengerId);
	FILE *fpPassenger;
	fpPassenger = fopen(FILE_NAME, "r+");
	if(FILE_NAME == NULL)
	{
		printf("\nError!");
		return;
	}
	while(fread(&passenger, sizeof(passenger), 1, fpPassenger))
	{
		if(passenger.travelId == passengerId)
		{
			passenger.status = 'D';
			fseek(fpPassenger, -sizeof(passenger), SEEK_CUR);
			fwrite(&passenger, sizeof(passenger), 1, fpPassenger);
			printf("\nSuccessfully deleted the record.");
			break;
		}
	}
	fclose(fpPassenger);
}