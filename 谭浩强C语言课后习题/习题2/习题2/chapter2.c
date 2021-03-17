#define _CRT_SECURE_NO_WARNINGS 1  

//1.算法：简而言之就是求解问题的步骤，对特定问题求解步骤的一种描述

//2.结构化算法：由一些顺序、选择、循环等基本结构按照顺序组成，基本结构之间不存在向前向后的跳转，流程控制存在于一个基本范围内
	//结构化算法，便于编写、可读性高，便于修改维护，提供程序的可靠性

//3.三种基本结构：顺序结构，选择结构，循环结构
//	结构特定：1.只有一个入口 2.只有一个出口 3.结构内的每一部分都有机会执行  4.结构内不存在死循环

//4.求两个数的最大公约数，辗转相除法

//5. 流程图  N-S图
//6. 伪代码法表示算法
//7.结构化程序设计：以模块功能和处理过程设计为主   1.自顶向下 2.逐步细化 3.模块化设计 4.结构化编码

//8.
	//8.1输出1900-2000 之间的闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1900; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0)|| (year % 100 == 0 && year % 400 != 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//8.2求ax^2+bx+c=0的根

//#include <math.h>
//int main()
//{
//	double a, b, c;
//	printf("Please input a,b,c:");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double d = b*b- 4 * a*c;
//	if (d < 0)
//	{
//		printf("没有实根\n");
//	}
//	else if (d == 0)
//	{
//		printf("有两个相同的实根:%lf\n", -b / (2 * a));
//	}
//	else
//	{
//		printf("有两个实根:%lf和%lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) /( 2 * a));
//	}
//	return 0;
//}

//8.3 输入10个数，输出其中最大值

#include <stdio.h>
int main()
{
	int arr[10] = {0};
	int max = 0;
	int i = 0;

	printf("请输入10个数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max is %d\n", max);

	return 0;
}
