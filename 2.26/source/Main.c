#include <stdio.h>
#include <stdlib.h>

int num[2] = { 0, 0 };
int main(void)
{
	printf("�п�J��Ӿ�ơA�èϥΪŮ���j�G\n");
	scanf_s("%d%d", &num[0], &num[1]);
	printf("\n");
	if (num[0] % num[1] == 0)
	{
		printf("%d��%d������\n", num[0], num[1]);
	}
	else
	{
		printf("%d���O%d������\n", num[0], num[1]);
	}
	system("pause");
	return 0;
}