#include <stdio.h>
#include <stdlib.h>

int num = 0;
int main(void)
{
	printf("�п�J�@�Ӿ�ơG\n");
	scanf_s("%d", &num);
	printf("\n");
	if (num % 2 == 0)
	{
		printf("%d�ݩ󰸼�\n", num);
	}
	else
	{
		printf("%d�ݩ�_��\n", num);
	}
	system("pause");
	return 0;
}