#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	int i = 0;
	double num = 0.0;
		//scanf("%lf", &num);
	num -= 1.0;
	do
	{
		if (fabs(num) <= 1e-6)
		{
			printf("num = 0\n");
			break;
		}
		else if (num > 1e-6)
		{
			printf("num > 0\n");
			num -= 1.0;
		}
		else
		{
			printf("num < 0\n");
			num += 2.0;

		}
		Sleep(200);
	} while (1);
	return 0;
}