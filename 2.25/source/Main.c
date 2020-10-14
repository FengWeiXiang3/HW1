#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int W = 0; W <= 4; W++)
	{
		for (int wid = 0; wid <= 8; wid++)
		{
			if (W == 0 || W == 4 ||
				((W == 1 || W == 3) && (wid == 2 || wid == 3)) ||
				(W == 2 && (wid == 4 || wid == 5)))
			{
				printf("W");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("         \n");
	for (int X = 0; X <= 4; X++)
	{
		for (int wid = 0; wid <= 8; wid++)
		{
			if (((X == 0 || X == 4) && (wid == 0 || wid == 1 || wid == 7 || wid == 8)) ||
				((X == 1 || X == 3) && (wid == 2 || wid == 3 || wid == 5 || wid == 6)) ||
				(X == 2 && wid == 4))
			{
				printf("X");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("         \n");
	for (int F = 0; F <= 4; F++)
	{
		for (int wid = 0; wid <= 8; wid++)
		{
			if (F == 0 || wid == 8 || wid == 4)
			{
				printf("F");
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