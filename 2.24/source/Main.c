#include <stdio.h>
#include <stdlib.h>

int num = 0;
int main(void)
{
	printf("請輸入一個整數：\n");
	scanf_s("%d", &num);
	printf("\n");
	if (num % 2 == 0)
	{
		printf("%d屬於偶數\n", num);
	}
	else
	{
		printf("%d屬於奇數\n", num);
	}
	system("pause");
	return 0;
}