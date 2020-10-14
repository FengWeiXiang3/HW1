#include <stdio.h>
#include <stdlib.h>

double wei = 0;
double hei = 0;
double BMI = 0;
int main(void)
{
	printf("請輸入體重（單位：公斤）：\n");
	scanf_s("%lf", &wei);
	printf("請輸入身高（單位：公尺）：\n");
	scanf_s("%lf", &hei);
	BMI = wei / (hei*hei);
	printf("\nBMI=%.3f\n", BMI);
	if (BMI < 18.5)
	{
		printf("過輕：低於18.5");
	}
	else if (BMI < 24.9)
	{
		printf("適中：18.5~24.9");
	}
	else if (BMI < 29.9)
	{
		printf("超重：24.9~29.9");
	}
	else
	{
		printf("肥胖：30以上");
	}
	printf("\n");
	system("pause");
	return 0;
}