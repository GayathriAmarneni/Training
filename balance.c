//Print balance in the file using fwrite and fprintf.

#include<stdio.h>
int main()
{
	int balance = 1000000;
	FILE *fpBalance;
	fpBalance = fopen("balance.dat", "w");
	fprintf(fpBalance, "%d", balance);
	fwrite(&balance, sizeof(balance), 1, fpBalance);
	fclose(fpBalance);
}