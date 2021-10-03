//Framework program in c.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DATAFILE_NAME "framework2.dat"
#define FIELDFILE_NAME "fields.cfg"
#define MENUFILE_NAME "menu.cfg"
void createRecord();
void readRecords();
void updateRecord();
void deleteRecord();
char fieldName[50][100];
int countOfFields;
FILE *fpFields;
void main()
{
	int option;
	char menuLine[100];
	FILE *fpMenu;
	do
	{
		fpFields = fopen(FIELDFILE_NAME, "r");
		int counter = 0;
		system("cls");
		while(fgets(fieldName[counter], 100, fpFields))
		{
			fieldName[counter][strlen(fieldName[counter]) - 1] = '\0';
			counter++;
		}
		countOfFields = counter;
		fpMenu = fopen(MENUFILE_NAME, "r");
		while(fgets(menuLine, 100, fpMenu))
		{
			printf("%s", menuLine);
		}
		printf("\nEnter your option: ");
		scanf("%d", &option);
		switch(option)
		{
			case 1: createRecord();
			break;
			case 2: readRecords();
			break;
			case 3: updateRecord();
			break;
			case 4: deleteRecord();
			break;
			case 5: ;
			break;
			default: printf("\nEnter a valid option");
			break;
			getch();
		}
	}while(option != 5);
	fclose(fpMenu);
	fclose(fpFields);
}
void createRecord()
{
	printf("\nEnter new record details ...\n");
	char fieldValue[20], status[20];
	int counter = 0;
	FILE *fpData;
	fpData = fopen(DATAFILE_NAME, "a");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	strcpy(status, "Activated");
	fwrite(&status, sizeof(status), 1, fpData);
	while(counter < countOfFields)
	{
		printf("Please Enter %s: ", fieldName[counter]);
		scanf("%s", fieldValue);
		fwrite(fieldValue, sizeof(fieldValue), 1, fpData);
		counter++;
	}
	printf("\nRecord saved successfully.\nEnter a key to continue.");
	fclose(fpData);
	getch();
}

void readRecords()
{
	printf("\nALL THE RECORDS\n");
	char fieldValue[20], status[20], status1[20];
	int counter = 0;
	FILE *fpData;
	strcpy(status, "Activated");
	strcpy(status1, "Deactivated");
	fpData = fopen(DATAFILE_NAME, "r");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	while(fread(fieldValue, sizeof(fieldValue), 1, fpData))
	{
		if(strcmp(status, fieldValue) == 0 || strcmp(status1, fieldValue) == 0)
		{
			printf("status: ");
			printf("%s\n", fieldValue);
		}
		else
		{
			fgets(fieldName[counter], 100, fpFields);
			printf("%s: %s\n", fieldName[counter], fieldValue);
			counter++;
			if(counter == countOfFields)
			{
				printf("----------------\n");
				counter = 0;
			}
		}
	}
	printf("\nEnter a key to continue.");
	fclose(fpData);
	getch();
}

void updateRecord()
{
	char fieldValue[20], tempFieldValue[20];
	FILE *fpData;
	int counter = 0;
	fpData = fopen(DATAFILE_NAME, "r+");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	fgets(fieldName[counter], 20, fpFields);
	printf("\nTo update enter your %s: ", fieldName);
	scanf("%s", tempFieldValue);
	while(fread(fieldValue, sizeof(fieldValue), 1, fpData))
	{
		if(strcmp(tempFieldValue, fieldValue) == 0)
		{
			fseek(fpData, 20, SEEK_CUR);
			fread(fieldValue, sizeof(fieldValue), 1, fpData);
			printf("%s should be changed to: ", fieldValue);
			scanf("%s", fieldValue);
			fseek(fpData, -20, SEEK_CUR);
			fwrite(fieldValue, sizeof(fieldValue), 1, fpData);
			break;
		}
	}
	printf("\nRecord details updated successfully.\nEnter a key to continue.");
	fclose(fpData);
	getch();
}
void deleteRecord()
{
	char fieldValue[20], tempFieldValue[20];
	int counter = 0;
	FILE *fpData;
	fpData = fopen(DATAFILE_NAME, "r+");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	fgets(fieldName[counter], 20, fpFields);
	printf("\nTo delete enter your %s: ", fieldName);
	scanf("%s", tempFieldValue);
	while(fread(fieldValue, sizeof(fieldValue), 1, fpData))
	{
		if(strcmp(tempFieldValue, fieldValue) == 0)
		{
			fseek(fpData, -40, SEEK_CUR);
			fread(fieldValue, sizeof(fieldValue), 1, fpData);
			printf("Enter the status as Deactivated: ");
			scanf("%s", fieldValue);
			fseek(fpData, -20, SEEK_CUR);
			fwrite(fieldValue, sizeof(fieldValue), 1, fpData);
			break;
		}
	}
	printf("\nDetails deactivated successfully.\nEnter a key to continue.");
	fclose(fpData);
	getch();
}	
