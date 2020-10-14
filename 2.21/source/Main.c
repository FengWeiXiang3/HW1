#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int len = 0; len <= 8; len++)
	{
		for (int squ = 0; squ <= 8; squ++)
		{
			if (len == 0 || len == 8 || squ == 0 || squ == 8)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("       ");
		for (int rou = 0; rou <= 8; rou++)
		{
			if (((len == 0 || len == 8) && rou >= 3 && rou <= 5) ||
				((len == 1 || len == 7) && (rou == 1 || rou == 7)) ||
				(len >= 2 && len <= 6 && (rou == 0 || rou == 8)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("       ");
		for (int arr = 0; arr <= 4; arr++)
		{
			if ((len == 1 && arr >= 1 && arr <= 3) || len == 2 || arr == 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("       ");
		for (int dia = 0; dia <= 8; dia++)
		{
			if (dia == 4 + len || dia == 4 - len || dia == 12 - len || dia == len - 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}