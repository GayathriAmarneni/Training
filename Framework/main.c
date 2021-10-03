//Framework program in c.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define DATAFILE_NAME "framework.dat"
#define FIELDFILE_NAME "fields.cfg"
#define MENUFILE_NAME "menu.cfg"
void createRecord();
void readRecords();
void updateRecord();
void deleteRecord();
FILE *fpFields;
int main()
{
	char menuLine[100];
	int option;
	FILE *fpMenu;
	fpFields = fopen(FIELDFILE_NAME, "r");
	if(fpMenu == NULL)
	{
		printf("Error!");
		return;
	}
	do
	{
		system("cls");
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
			default: printf("\nEnter valid option");
			break;
			getch();
		}
	}while(option != 5);
	fclose(fpFields);
	fclose(fpMenu);
}
void createRecord()
{
	printf("\nEnter new record details ...\n");
	char fieldName[100], fieldValue[20];
	char status[20];
	FILE *fpData;
	fpData = fopen(DATAFILE_NAME, "a");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	strcpy(status, "Activated");
	fwrite(&status, sizeof(status), 1, fpData);
	rewind(fpFields);
	while(fgets(fieldName, 100, fpFields) != NULL)
	{
		fieldName[strlen(fieldName) - 1] = '\0';
		printf("Please enter %s: ", fieldName);
		scanf("%s", fieldValue);
		fwrite(fieldValue, sizeof(fieldValue), 1, fpData);
	}
	printf("\nRecord details saved successfully.\nEnter a key to continue.");
	fclose(fpData);
	getch();
}
void readRecords()
{
	char fieldName[100], fieldValue[20], status[20], status1[20];
	FILE *fpData;
	strcpy(status, "Activated");
	strcpy(status1, "Deactivated");
	fpData = fopen(DATAFILE_NAME, "r");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	rewind(fpFields);
	while(fread(fieldValue, sizeof(fieldValue), 1, fpData))
	{
		if(strcmp(status, fieldValue) == 0 || strcmp(status1, fieldValue) == 0)
		{
			printf("status: ");
			printf("%s\n", fieldValue);
		}
		else
		{
			fgets(fieldName, 100, fpFields);
			fieldName[strlen(fieldName) - 1] = '\0';
			printf("%s: %s\n", fieldName, fieldValue);
			if(feof(fpFields))
			{
				fseek(fpFields, 0, SEEK_SET);
				printf("-------------\n");
			}
		}
	}
	printf("\nEnter a key to continue.");
	fclose(fpData);
	getch();
}
void updateRecord()
{
	char fieldName[100], fieldValue[20]; 
	char tempFieldValue[20];
	FILE *fpData;
	fpData = fopen(DATAFILE_NAME, "r+");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	rewind(fpFields);
	fgets(fieldName, 20, fpFields);
	fieldName[strlen(fieldName) - 1] = '\0';
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
	char fieldName[100], fieldValue[20]; 
	char tempFieldValue[20];
	FILE *fpData;
	fpData = fopen(DATAFILE_NAME, "r+");
	if(fpData == NULL)
	{
		printf("\nError!");
		return;
	}
	rewind(fpFields);
	fgets(fieldName, 20, fpFields);
	fieldName[strlen(fieldName) - 1] = '\0';
	printf("\nTo delete enter your %s: ", fieldName);
	scanf("%s", tempFieldValue);
	while(fread(fieldValue, sizeof(fieldValue), 1, fpData))
	{
		if(strcmp(tempFieldValue, fieldValue) == 0)
		{
			fseek(fpData, -40, SEEK_CUR);
			fread(fieldValue, sizeof(fieldValue), 1, fpData);
			printf("Enter the status as deactivated: ");
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