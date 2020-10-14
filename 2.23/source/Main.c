#include <stdio.h>
#include <stdlib.h>

int num[3] = { 0,0,0 };
int lar = 0;
int sma = 0;
int main(void)
{
	printf("叫块俱计ㄏノだ筳\n");
	scanf_s("%d%d%d", &num[0], &num[1], &num[2]);
	lar = num[0];
	sma = num[0];
	for (int i = 1; i <= 2; i++)
	{
		if (num[i] > lar)
		{
			lar = num[i];
		}
		if (num[i] < sma)
		{
			sma = num[i];
		}
	}
	printf("\n%d琌ㄤい程俱计\n", lar);
	printf("%d琌ㄤい程俱计\n", sma);
	system("pause");
	return 0;
}