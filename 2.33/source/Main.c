#include <stdio.h>
#include <stdlib.h>

double tot = 0;
double cos = 0;
double ave = 0;
int par = 0;
int tol = 0;
double use = 0;
int main(void)
{
	printf("請輸入每日行駛的總公里數：\n");
	scanf_s("%lf", &tot);
	printf("請輸入每升汽油的價格：\n");
	scanf_s("%lf", &cos);
	printf("請輸入每升平均公里數：\n");
	scanf_s("%lf", &ave);
	printf("請輸入每日的停車費：\n");
	scanf_s("%d", &par);
	printf("請輸入每日的通行費：\n");
	scanf_s("%d", &tol);
	use = (tot / ave)*cos + par + tol;
	printf("\n每日開車上班的花費：%.3f\n", use);
	system("pause");
	return 0;
}