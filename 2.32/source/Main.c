#include <stdio.h>
#include <stdlib.h>

double wei = 0;
double hei = 0;
double BMI = 0;
int main(void)
{
	printf("�п�J�魫�]���G����^�G\n");
	scanf_s("%lf", &wei);
	printf("�п�J�����]���G���ء^�G\n");
	scanf_s("%lf", &hei);
	BMI = wei / (hei*hei);
	printf("\nBMI=%.3f\n", BMI);
	if (BMI < 18.5)
	{
		printf("�L���G�C��18.5");
	}
	else if (BMI < 24.9)
	{
		printf("�A���G18.5~24.9");
	}
	else if (BMI < 29.9)
	{
		printf("�W���G24.9~29.9");
	}
	else
	{
		printf("�έD�G30�H�W");
	}
	printf("\n");
	system("pause");
	return 0;
}