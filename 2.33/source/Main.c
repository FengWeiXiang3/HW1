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
	printf("�п�J�C���p���`�����ơG\n");
	scanf_s("%lf", &tot);
	printf("�п�J�C�ɨT�o������G\n");
	scanf_s("%lf", &cos);
	printf("�п�J�C�ɥ��������ơG\n");
	scanf_s("%lf", &ave);
	printf("�п�J�C�骺�����O�G\n");
	scanf_s("%d", &par);
	printf("�п�J�C�骺�q��O�G\n");
	scanf_s("%d", &tol);
	use = (tot / ave)*cos + par + tol;
	printf("\n�C��}���W�Z����O�G%.3f\n", use);
	system("pause");
	return 0;
}