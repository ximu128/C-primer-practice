#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001		原码
//	//11111111111111111111111111111111		补码
//	//11111111		char存八个字节
//	//11111111111111111111111111111111		整型提升--补码
//	//11111111111111111111111111111110		反码
//	//10000000000000000000000000000001		打印原码
//	signed char b = -1;
//	//11111111		有符号的char存八个字节
//	//11111111111111111111111111111111		整型提升--补码
//	// 1111111111111111111111111111110		反码
//	//10000000000000000000000000000001		打印原码
//	unsigned char c = -1;
//	//11111111		无符号的char存八个字节，无符号数与正数一样，原反补都相同
//    //00000000000000000000000011111111		原码反码补码都相同
//	//11111111转换成十进制数就是255
//	signed char b = -1;
//	printf("%d %d %d \n", a, b, c);//进行整形提升
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000		原码
//	//11111111111111111111111101111111		反码
//	//11111111111111111111111110000000		补码
//	printf("%u\n", a);
//	//%u		打印十进制无符号数，将a视为无符号位数字处理，原反补相同，进而进行打印
//    char b = 128;//128->127+1		二进制序列为10000000
//    printf("%u\n", b);
//	return 0;
//}
//int main()
//{
//	char a = 128;//128->127+1		二进制序列为10000000
//	printf("%u", a);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	//000000000000000000000000000001010
//	//000000000000000000000000000001010
//	//000000000000000000000000000001010
//	unsigned int b = -20;
//	//100000000000000000000000000010100
//	//111111111111111111111111111101011
//	//111111111111111111111111111101100
//	printf("%d", i + b);
//	//按照补码的形式进行运算，最后格式化为有符号整数
//	//000000000000000000000000000001010			补码
//	//111111111111111111111111111101100			补码
//	// 计算i+b
//	//111111111111111111111111111110110			i+b的补码
//	//111111111111111111111111111110101			反码
//	//100000000000000000000000000001010			原码	-10
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	unsigned int i = 0;
//	//无符号数取值永远大于等于0
//	for (i = 9; i >= 0; i--)
//		//00000000 00000000 00000000 00001001
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char a[1000];
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//
//	// 0 00000000 0000000000000000001001  
//	//S=0
//	//M=0
//	//E=0
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126  无限接近0
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0*1.001*2^3
//	// 0 10000010 00100000000000000000000		存储的二进制序列
//	//1091567616								转换成十进制的数字
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//S = 0
//	//M = 1.011 
//	//E = 2
//	//0 10000001 01100000000000000000000
//	//0x40b00000
//	//(-1)^0 * 1.011 * 2^2
//	//
//
//	//0 00000000 01100000000000000000000
//	//+/- 0.011 * 2^-126
//	//
//	//0 11111111 01100000000000000000000
//	//E+127 = 255
//	//E = 128
//	//1.xxx * 2^128
//	//表示的正负无穷大的数字
//	//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", p);//abcdef
//    char* p1 = "abcdef";		//常量字符串，不允许修改
//	//p1存放的是"abcdef/0"的首元素的地址，printf打印遇到/0才会停止打印
//	printf("%c\n", *p1);//a
//	printf("%s\n", p1);//abcdef
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//两个变量字符串,内存中所处位置不同，指针指向地址也不同。
//	char* a1= arr1;
//	char* a2 = arr2;
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//两个常量字符串，可以引用不可以修改，为节省内存空间在内存中只存一份。p1、p2指向的地址相同，所以p1=p2
//	if (a1 == a2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	printf("%p\n", a1);
//	printf("%p\n", a2);
//	printf("%p\n", p1);
//	printf("%p\n", p1);
//
//}
//int main()
//{
//	//int *p = NULL; //p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	               //数组指针 - 指向数组的指针 - 存放数组的地址
//	//int arr[10] = {0};
//	//arr- 首元素地址
//	//&arr[0] -首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-5d ", *(p + i));
//		printf("%-5d ", *(arr + i));
//		printf("%-5d ", p[i]);
//		printf("%-5d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//		printf("\n");
//	}	
//	return 0;
//}
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//		/*	printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));*/
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//	print2(arr, 3, 5);//二维数组传参传的是第一行一维数组的地址
//
//	return 0;
//}

