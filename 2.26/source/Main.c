#include <stdio.h>
#include <stdlib.h>

int num[2] = { 0, 0 };
int main(void)
{
	printf("請輸入兩個整數，並使用空格分隔：\n");
	scanf_s("%d%d", &num[0], &num[1]);
	printf("\n");
	if (num[0] % num[1] == 0)
	{
		printf("%d為%d的倍數\n", num[0], num[1]);
	}
	else
	{
		printf("%d不是%d的倍數\n", num[0], num[1]);
	}
	system("pause");
	return 0;
}