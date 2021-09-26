//File for storing records of passengers for travel agency.

#include<stdio.h>
#define FILE_NAME "framework.dat"
int main()
{
	char menuLine[100];
	FILE *fpMenu;
	fpMenu = fopen("menu.cfg", "r");
	if(fpMenu == NULL)
	{
		printf("Error!");
		return;
	}
	while(fgets(menuLine, 100, fpMenu) != NULL)
	{
		puts(menuLine);
	}
	fclose(fpMenu);
	return 0;
}